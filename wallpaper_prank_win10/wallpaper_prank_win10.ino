#include "Keyboard.h"
#include <Mouse.h>

/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Nurrl/Duckuino/blob/master/LICENSE'
 */
void backslash()
{
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('_');
  Keyboard.releaseAll();
  
}


void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
  }



/* Init function */
void setup()
{

delay(10000); //delay to wait installation of device
  pinMode(2,INPUT);

if (digitalRead(2)==LOW)
{
  // Begining the Keyboard stream

Keyboard.begin();

  // Wait 1000ms
  delay(1000);

//desactivate Display switch
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print("DisplaySwitch.exe /internal");
  delay(500);
  typeKey(KEY_RETURN);

//Goto Desktop
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

//run execut commant (Win + r)
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

//run SnippingTool
  delay(1000);
  Keyboard.print("SnippingTool");
  typeKey(KEY_RETURN);
  
//mode printscreen
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('m');
  Keyboard.releaseAll();

//make printscreen
  delay(1000);
  typeKey(KEY_DOWN_ARROW);
  typeKey(KEY_DOWN_ARROW);
  typeKey(KEY_DOWN_ARROW);
  typeKey(KEY_DOWN_ARROW);
  typeKey(KEY_RETURN);

//copy printscreen
  delay(1000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  Keyboard.releaseAll();

//Close Snipping Tool
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

//no save picture
  delay(1000);
  typeKey(KEY_RIGHT_ARROW);
  typeKey(KEY_RETURN);

//launch execute command (win+r)
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

//launch mspaint
  delay(1000);
  Keyboard.print("mspaint");
  typeKey(KEY_RETURN);

//paste picture in paint

  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.releaseAll();

//save picture before make wallpaper
  delay(1000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  Keyboard.releaseAll();

//rename picture before save
  delay(1000);
  Keyboard.print("%userprofile%");
  backslash();
  Keyboard.print("prank.bmp");
  typeKey(KEY_RETURN);

//set picture as wallpaper
//open file menu
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('f');
  Keyboard.releaseAll();

//select set as wallpaper
  delay(1000);
  typeKey('b');

//close paint

  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

//remove picture
//start cmd.exe

  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print("cmd");
  typeKey(KEY_RETURN);

//remove file
  delay(1000);
  Keyboard.print("DEL ");
  Keyboard.print("%userprofile%");
  backslash();
  Keyboard.print("prank.bmp");
  typeKey(KEY_RETURN);

//exit cmd
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

//goto desktop
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

//stop Keyboard and begin mouse
  Keyboard.end();
  delay(1000);
  Mouse.begin();
  delay(1000);
//go up the screen
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));
  Mouse.move(0, char(1000));


//mouse RIGHT click
  delay(100);
  Mouse.click(MOUSE_RIGHT);
  delay(100);
  Mouse.end();

//begin Keyboard
  delay(1000);
  Keyboard.begin();
  delay(1000);

//choose disable icon in desktop
  typeKey(KEY_DOWN_ARROW);
  delay(100);
  typeKey(KEY_RIGHT_ARROW);
  delay(100);
  typeKey(KEY_UP_ARROW);
  delay(100);
  typeKey(KEY_RETURN);

//end !!! icon are disable and wallpaper make seem real ;) 
}}

/* Unused endless loop */
void loop() {}
