#include <Servo.h>

/*
  Author: Lauren Crist
  Project: Biomimetic Anthropomorphic Arduino Powered Robotic Hand
  Date: April 2019
  Description: This Arduino code controls a robotic hand with 5 servos and 5 flex sensors. The flex sensors are used to control the position of each finger (thumb, index, middle, ring, pinky).
*/

Servo thumb;  // Servo for thumb (green)
Servo index;  // Servo for index finger (yellow)
Servo middle; // Servo for middle finger (grey)
Servo ring;   // Servo for ring finger (purple)
Servo pinky;  // Servo for pinky finger (orange)

int flexT = A0; // Analog pin for thumb flex sensor
int flexI = A1; // Analog pin for index finger flex sensor
int flexM = A2; // Analog pin for middle finger flex sensor
int flexR = A3; // Analog pin for ring finger flex sensor
int flexP = A4; // Analog pin for pinky finger flex sensor

int valT;
int valI;
int valM;
int valR;
int valP;

void setup() {
    Serial.begin(9600);
    
    // Set pin modes for flex sensors
    pinMode(flexT, INPUT);
    pinMode(flexI, INPUT);
    pinMode(flexM, INPUT);
    pinMode(flexR, INPUT);
    pinMode(flexP, INPUT);
    
    // Attach servos to corresponding pins
    thumb.attach(2);
    index.attach(3);
    middle.attach(4);
    ring.attach(5);
    pinky.attach(6);
}

void loop() {
    // Read flex sensor values and map them to servo angles
    valT = analogRead(flexT);
    valT = map(valT, 760, 720, 0, 180);
    thumb.write(valT);
    delay(10);
    
    valI = analogRead(flexI);
    Serial.println(valI); // Print the index finger flex sensor value
    valI = map(valI, 760, 600, 0, 180);
    index.write(valI);
    delay(40);
    
    valM = analogRead(flexM);
    valM = map(valM, 760, 620, 0, 180);
    middle.write(valM);
    delay(40);
    
    valR = analogRead(flexR);
    valR = map(valR, 700, 790, 0, 180);
    ring.write(valR);
    delay(40);
    
    valP = analogRead(flexP);
    valP = map(valP, 660, 780, 0, 180);
    pinky.write(valP);
    delay(40);
}
