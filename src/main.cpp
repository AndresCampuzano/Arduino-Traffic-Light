#include <Arduino.h>

int redLed = 10;
int yellowLed = 11;
int greenLed = 12;

void setupLed() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void trafficLight() {
  // Green light on for 5 seconds
  digitalWrite(greenLed, HIGH);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, LOW);
  delay(5000);

  // Yellow light on for 2 seconds
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(redLed, LOW);
  delay(2000);

  // Red light on for 5 seconds
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(5000);
}

void setup() {
  setupLed();
}

void loop() {
  trafficLight();
}
