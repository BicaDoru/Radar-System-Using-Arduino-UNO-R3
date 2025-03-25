🚀 Radar System Using Arduino UNO
📌 Introduction
This project demonstrates a simple Radar System using an Arduino UNO, an ultrasonic sensor (HC-SR04), and a servo motor. It can detect objects within a certain range and beeps when one is found.

🔍 How It Works
The servo motor rotates the HC-SR04 ultrasonic sensor from left to right.

The ultrasonic sensor measures distances to detect nearby objects.

The system continuously scans the area and sparks the red LED and activates the buzzer whenever an object is detected

📦 Components Required

Arduino UNO 	1
HC-SR04 Ultrasonic Sensor	1
SG90 Servo Motor	1
Jumper Wires	25
Breadboard	1
220 Ohm Resistor 2
Active Buzzer 1
Red LED 1

🔌 Wiring Guide

![image](https://github.com/user-attachments/assets/4d9c8625-cd9b-44a8-ad71-617dbbaa6d49)

▶️ How to Use
Assemble the circuit following the wiring guide.

Upload the provided Arduino code to your Arduino UNO.

Once powered on, the servo motor will begin scanning the area by moving the ultrasonic sensor from left to right.

When an object is found, the red LED sparks and the buzzer beeps.

The radar system continuously updates as it scans for obstacles.

