#include "Keyboard.h"

int buttonPin = 9;
int buttonPin2 = 10;

const unsigned long time_out = 10000;
unsigned long timer_val;

void setup() {
  pinMode(buttonPin, INPUT);  // Set the button as an input
  digitalWrite(buttonPin, HIGH);  // Pull the button high
  // make pin 2 an input and turn on the 
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  this_setup();
}

void loop() {
    
  if (digitalRead(buttonPin) == 0)  // if the button goes low
  {
    Keyboard.print("door(\"closed\")");
    delay(100);
    Keyboard.write(0xB0);
    delay(1000);
    while (digitalRead(buttonPin) == 0){
      delay(100);
    }
  } 
  else{
    Keyboard.print("door(\"openned\")");
    delay(100);
    Keyboard.write(0xB0);
    delay(1000);
    if ( (millis () - timer_val) >= time_out) 
      email();
    while (digitalRead(buttonPin) == 1){
      delay(100);
    }    
  }
}
