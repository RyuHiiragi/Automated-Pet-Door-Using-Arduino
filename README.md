# Automated Pet Door Using Arduino

This repository contains the Arduino code, configuration, and assembly instructions for building an automated pet door using an RFID reader and servo motor. The system unlocks the door only when a registered RFID tag is detected, ensuring secure access for pets <button class="citation-flag" data-index="1">. This project is ideal for pet owners who want to automate pet entry/exit while maintaining security.

---

## Table of Contents
1. [Overview](#overview)
2. [Components Used](#components-used)
3. [System Dimensions](#system-dimensions)
4. [Assembly Instructions](#assembly-instructions)
5. [Arduino Code Explanation](#arduino-code-explanation)
6. [Contributing](#contributing)
7. [License](#license)

---

## Overview
The automated pet door uses an RFID reader to detect tags attached to a pet’s collar. When a registered tag is detected, the Arduino triggers a servo motor to unlock the door for a set duration <button class="citation-flag" data-index="1">. This ensures only authorized pets can enter or exit, enhancing safety and convenience.

---

## Components Used
To build this automated pet door, you will need:
- **Arduino Uno**
- **RC522 RFID Module**
- **Micro Servo (e.g., SG90)**
- **RFID Tags**
- **Door Latch Mechanism**
- **Jumper Wires**

---

## System Dimensions
For an ideal automated pet door:
- **Height**: 20–25 cm
- **Width**: 15–20 cm
- **Thickness**: 3–5 cm

---

## Assembly Instructions
1. Mount the RFID reader near the door frame to detect tags <button class="citation-flag" data-index="1">.
2. Connect the servo motor to the door latch for mechanical unlocking <button class="citation-flag" data-index="5">.
3. Wire the RFID module and servo to the Arduino.
4. Secure all components in a protective enclosure.

---

## Arduino Code Explanation
The code reads RFID tags using the RC522 module and compares them to a pre-registered UID. If authorized, the servo motor rotates to unlock the door for 5 seconds before relocking <button class="citation-flag" data-index="1">. The system ensures secure access control for pets.

---

## Contributing
Feel free to fork this repository and contribute improvements or new features. If you have suggestions or find bugs, please open an issue.

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

By following this guide, you should be able to build and test your own automated pet door using Arduino. Happy tinkering! 🚀
