#include <Arduino.h>
#include <Mouse.h>
#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Mouse.move(10,10,0);
  Mouse.click();
  long charAscii = random(32, 127);
  Keyboard.press(charAscii);
  Keyboard.releaseAll();
  delay(random(200, 1000));
  Mouse.move(-10,-10,0);
  Mouse.click();
  charAscii = random(32, 127);
  Keyboard.press(charAscii);
  Keyboard.releaseAll();
  delay(random(200, 1000));
}