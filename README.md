# Biomimetic Anthropomorphic Robotic Hand

## Description

This Arduino project controls a biomimetic anthropomorphic robotic hand with 5 servos and 5 flex sensors. Each finger's position (thumb, index, middle, ring, and pinky) is controlled by a corresponding flex sensor. The flex sensors measure the bending of each finger and translate it into servo motor movements, mimicking the movement of a human hand.

## Author

- **Author:** Lauren Crist
- **Date:** April 2019

## Table of Contents

- [Biomimetic Anthropomorphic Robotic Hand](#biomimetic-anthropomorphic-robotic-hand)
  - [Description](#description)
  - [Author](#author)
  - [Table of Contents](#table-of-contents)
  - [Components](#components)
  - [Installation](#installation)
  - [Usage](#usage)

## Components

- Arduino board
- 5 Servo motors (for thumb, index, middle, ring, and pinky)
- 5 Flex sensors (to measure finger bending)
- Wires and connections

## Installation

1. Connect the hardware components.
2. Open the Arduino IDE.
3. Upload the provided Arduino sketch (`RoboticHandControl.ino`) to your Arduino board.

## Usage

1. After uploading the code to the Arduino board, follow these steps:
   - The project uses flex sensors to detect finger bending.
   - Each flex sensor corresponds to a finger servo motor.
   - As you bend a finger, the flex sensor measures the bending and translates it into servo motor movements.
   - The result is a biomimetic robotic hand that mimics human-like finger movements.

2. Modify the code and hardware setup to customize the behavior of the robotic hand according to your requirements or use it for various applications.
