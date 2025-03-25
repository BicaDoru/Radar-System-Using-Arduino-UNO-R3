# 🚀 Radar System Using Arduino UNO

## 📌 Introduction
This project demonstrates a simple **Radar System** using an **Arduino UNO**, an **ultrasonic sensor (HC-SR04)**, and a **servo motor**. It can detect objects within a certain range and beeps when one is found.

## 🔍 How It Works
- The **servo motor** rotates the **HC-SR04 ultrasonic sensor** from left to right.
- The **ultrasonic sensor** measures distances to detect nearby objects.
- The system continuously scans the area and **activates the red LED and buzzer** whenever an object is detected.

## 📦 Components Required
| Component                  | Quantity |
|----------------------------|----------|
| Arduino UNO                | 1        |
| HC-SR04 Ultrasonic Sensor  | 1        |
| SG90 Servo Motor           | 1        |
| Jumper Wires               | 25       |
| Breadboard                 | 1        |
| 220 Ohm Resistor           | 2        |
| Active Buzzer              | 1        |
| Red LED                    | 1        |

## 🔌 Wiring Guide
![Wiring Diagram](![ec18f81e-930c-4fe4-bd0f-dd80a0f5ec46](https://github.com/user-attachments/assets/a345672f-e302-44b8-9da5-280d72068136)
)

## ▶️ How to Use
1. **Assemble the circuit** following the wiring guide.
2. **Upload the provided Arduino code** to your Arduino UNO.
3. Once powered on, the **servo motor will start scanning** the area by moving the ultrasonic sensor from left to right.
4. When an object is found, **the red LED will light up and the buzzer will beep**.
5. The radar system continuously updates as it scans for obstacles.

---

**📌 Note:**  
This project can be expanded by adding a **display** to show distance readings or integrating a **graphical radar system** using Processing IDE.

