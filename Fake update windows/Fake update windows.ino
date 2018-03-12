#include "Keyboard.h"
#include <Mouse.h>

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup() {
  

pinMode(2,INPUT);

if (digitalRead(2)==LOW)
{
Keyboard.begin();

delay(500);

Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();

delay(500);
Keyboard.print("iexplore -k http://fakeupdate.net/win10u/index.html");
delay(500);
typeKey(KEY_RETURN);

Keyboard.end();

}

}

void loop() {
  // put your main code here, to run repeatedly:

}
