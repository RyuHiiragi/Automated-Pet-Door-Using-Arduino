#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

// Define RFID pins
#define RST_PIN 9
#define SS_PIN 10

// Initialize RFID and servo
MFRC522 mfrc522(SS_PIN, RST_PIN);
Servo doorServo;

// Registered RFID tag UID (replace with your tag's UID)
const String authorizedUID = "12:34:56:78";

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Initialize RFID
  SPI.begin();
  mfrc522.PCD_Init();
  
  // Attach servo to pin
  doorServo.attach(5);
  doorServo.write(0); // Initial closed position
}

void loop() {
  // Check for RFID tag
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    String uid = "";
    for (byte i = 0; i < mfrc522.uid.size; i++) {
      uid += String(mfrc522.uid.uidByte[i], HEX);
      if (i < mfrc522.uid.size - 1) uid += ":";
    }
    
    // Check if UID is authorized
    if (uid.equalsIgnoreCase(authorizedUID)) {
      Serial.println("Authorized tag detected!");
      doorServo.write(90); // Unlock door
      delay(5000); // Keep door open for 5 seconds
      doorServo.write(0); // Lock door
    } else {
      Serial.println("Unauthorized tag detected!");
    }
    
    mfrc522.PICC_HaltA();
  }
}
