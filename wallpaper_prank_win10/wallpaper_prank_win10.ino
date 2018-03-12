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

delay(5000); //delay to wait installation of device
  pinMode(2,INPUT);

if (digitalRead(2)==LOW)
{
  // Begining the Keyboard stream

Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(1000);

//Goto Desktop
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

//run execut commant (Win + r)
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

//run SnippingTool
  delay(500);
  Keyboard.print("SnippingTool");
  typeKey(KEY_RETURN);
  
//mode printscreen
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('m');
  Keyboard.releaseAll();

//make printscreen
  delay(500);
  typeKey(KEY_DOWN_ARROW);
  typeKey(KEY_DOWN_ARROW);
  typeKey(KEY_DOWN_ARROW);
  typeKey(KEY_DOWN_ARROW);
  typeKey(KEY_RETURN);

//copy printscreen
  delay(500);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  Keyboard.releaseAll();

//Close Snipping Tool
  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

//no save picture
  delay(500);
  typeKey(KEY_RIGHT_ARROW);
  typeKey(KEY_RETURN);

//launch execute command (win+r)
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

//launch mspaint
  delay(500);
  Keyboard.print("mspaint");
  typeKey(KEY_RETURN);

//paste picture in paint

  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.releaseAll();

//save picture before make wallpaper
  delay(700);
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
  delay(700);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('f');
  Keyboard.releaseAll();

//select set as wallpaper
  delay(500);
  typeKey('b');

//close paint

  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

//remove picture
//start cmd.exe

  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print("cmd");
  typeKey(KEY_RETURN);

//remove file
  delay(500);
  Keyboard.print("DEL ");
  Keyboard.print("%userprofile%");
  backslash();
  Keyboard.print("prank.bmp");
  typeKey(KEY_RETURN);

//exit cmd
  delay(500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

//goto desktop
  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

//stop Keyboard and begin mouse
  Keyboard.end();
  delay(500);
  Mouse.begin();
  delay(500);
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
  delay(500);
  Keyboard.begin();
  delay(500);

//choose disable icon in desktop
  typeKey(KEY_DOWN_ARROW);
  delay(100);
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
