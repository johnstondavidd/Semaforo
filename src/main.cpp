#include <Arduino.h>

const int red = 0;
const int yellow = 1;
const int green = 2;

#define SECONDS(x) x * 1000

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(SECONDS(10));
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  delay(SECONDS(2));
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(SECONDS(10));
}