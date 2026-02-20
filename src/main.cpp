#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author Meenakshi
 * @date 2026-02-11
 *
 * @details
 * Measures distance using the HC-SR04 ultrasonic sensor
 * and displays the calculated distance on the Serial Monitor.
 */

#define trigPin 9
#define echoPin 10
long duration = 0;
long distance = 0;
void setup() {
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.println("Ultrasonic Distance Measurement Initialized");
}