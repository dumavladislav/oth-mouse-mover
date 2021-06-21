#include <Arduino.h>
#include <Mouse.h>

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Mouse.move(10,10,0);
  delay(1000);
  Mouse.move(-10,-10,0);
  delay(1000);
}