#include <Arduino.h>

const int red = PIN0;
const int yellow = PIN1;
const int green = PIN2;
const int button = PIN5;

#define SECONDS(x) x * 1000

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop()
{
  while (!digitalRead(button))
  {
    digitalWrite(yellow, (!digitalRead(yellow)));
    delay(SECONDS(0.5));
  }

  {
    //agregado por guillermo para testear si se puede comitear al remoto
  }
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