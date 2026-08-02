# Servo Motor Control Using Ultrasonic Sensor

## Description

This project demonstrates how to control a Servo Motor using an HC-SR04 Ultrasonic Sensor with Arduino. The project was completed in both simulation and real hardware environments.

## Components Used

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper Wires
- USB Cable

## Technologies Used

- Arduino IDE
- C++
- Tinkercad

---

# Part 1: Tinkercad Simulation

## Description

The circuit was designed and tested in Tinkercad before implementing it on real hardware.

### Features

- Simulated Arduino Uno circuit
- Servo motor control
- HC-SR04 distance detection
- Servo rotates when an object is detected within 10 cm
- Servo returns to its initial position when the object moves away

### Screenshot

<img width="2940" height="1912" alt="image" src="https://github.com/user-attachments/assets/f25ad9dc-bd1a-4545-b5f7-4ab54735ea1e" />


### Demo Video

https://drive.google.com/file/d/13qAZXm2Y31VAGNNxLuyqisVVKNUF5yiT/view?usp=sharing

---

# Part 2: Hardware Implementation

## Description

The project was implemented using a real Arduino Uno connected directly to the HC-SR04 Ultrasonic Sensor and the SG90 Servo Motor without a breadboard.

### Features

- Real Arduino Uno implementation
- Direct wiring without a breadboard
- HC-SR04 ultrasonic distance detection
- Servo motor control
- Object detection within 10 cm

### Demo Video

https://drive.google.com/file/d/123VimUjeGeqXs_VorrZvwf7XvpXIIoKg/view?usp=sharing

---

## Arduino Code

The Arduino source code is included in:

`servo_ultrasonic.ino`
