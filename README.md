🗑 Smart Dustbin – Touchless Lid Using Ultrasonic Sensor
📌 Overview

This project is a smart, touchless dustbin built using an ultrasonic distance sensor and a servo motor.

When a hand is placed in front of the sensor, the lid opens automatically. After a few seconds, the lid closes.

The goal of this project was to build a simple automation system that improves hygiene and demonstrates sensor-based control using a microcontroller.

🧠 Problem Statement

Traditional dustbins require physical contact to open the lid. This can spread germs and is not hygienic.

This project solves the problem by:

Detecting hand movement using an ultrasonic sensor

Automatically controlling the lid using a servo motor

Closing the lid after a short delay

🧰 Components Used

ESP32 Microcontroller

HC-SR04 Ultrasonic Distance Sensor

SG90 Micro Servo Motor

Cardboard box (used as dustbin body)

Jumper wires

Power supply (USB / battery)

⚙ Working Principle

The HC-SR04 ultrasonic sensor continuously measures the distance in front of the dustbin.

When a hand comes within a predefined distance threshold (for example, less than 15 cm), the ESP32 detects it.

The ESP32 sends a signal to the SG90 servo motor.

The servo rotates to open the lid.

After a delay of a few seconds, the servo rotates back to close the lid.
