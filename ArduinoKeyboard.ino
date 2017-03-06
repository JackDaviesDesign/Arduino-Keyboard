#include <Keyboard.h>

char  text1[] = "Test1";                                      
char  text2[] = "Test2";                                      
char  text3[] = "Test3";                                      
char  text4[] = "Test4";                                      
char  text5[] = "Test5";                                      
char  text6[] = "Test6";                                      
char  text7[] = "Test7";                                      
char  text8[] = "Test8";                                      
char  text9[] = "Test9";

int buttonPin2 = 2;  // Set a button to any pin
int buttonPin3 = 3;  // Set a button to any pin
int buttonPin4 = 4;  // Set a button to any pin
int buttonPin5 = 5;  // Set a button to any pin
int buttonPin6 = 6;  // Set a button to any pin
int buttonPin7 = 7;  // Set a button to any pin
int buttonPin8 = 8;  // Set a button to any pin
int buttonPin9 = 9;  // Set a button to any pin
int buttonPin10 = 10;  // Set a button to any pin

void setup()
{
    pinMode(buttonPin2, INPUT);  // Set the button as an input
  digitalWrite(buttonPin2, HIGH);  // Pull the button high
    pinMode(buttonPin3, INPUT);  // Set the button as an input
  digitalWrite(buttonPin3, HIGH);  // Pull the button high
    pinMode(buttonPin4, INPUT);  // Set the button as an input
  digitalWrite(buttonPin4, HIGH);  // Pull the button high
    pinMode(buttonPin5, INPUT);  // Set the button as an input
  digitalWrite(buttonPin5, HIGH);  // Pull the button high
    pinMode(buttonPin6, INPUT);  // Set the button as an input
  digitalWrite(buttonPin6, HIGH);  // Pull the button high
    pinMode(buttonPin7, INPUT);  // Set the button as an input
  digitalWrite(buttonPin7, HIGH);  // Pull the button high
    pinMode(buttonPin8, INPUT);  // Set the button as an input
  digitalWrite(buttonPin8, HIGH);  // Pull the button high
    pinMode(buttonPin9, INPUT);  // Set the button as an input
  digitalWrite(buttonPin9, HIGH);  // Pull the button high
    pinMode(buttonPin10, INPUT);  // Set the button as an input
  digitalWrite(buttonPin10, HIGH);  // Pull the button high

}

void loop()
{
  if (digitalRead(buttonPin2) == 0)  // if the button goes low
  {
    Keyboard.write("test");  // send a 'z' to the computer via Keyboard HID
    delay(500);  // delay so there aren't repeated keystrokes
  }
  else (digitalRead(buttonPin3) == 0);  // if the button goes low
  {
    Keyboard.write(text2);  // send a 'z' to the computer via Keyboard HID
    //delay(1000);  // delay so there aren't a kajillion z's
  }
  delay(1000);
}
