#include "Keyboard.h"

//this is the button which determines the state of the door.
int buttonPin = 9;

// duration after which emails will be sent
const unsigned long time_out = 10*000;
// keeps track of time
unsigned long timer_val;
// keeps track of the number of times the loop has run
int turns = 0;

// sets the board up
void setup() {
  pinMode(buttonPin, INPUT);  // Set the button as an input
  digitalWrite(buttonPin, HIGH);  // Pull the button high
  digitalWrite(motorPin, LOW);
  // make pin 2 an input and turn on the pullup resistor
  pinMode(2, INPUT_PULLUP);
  this_setup();
}

// loop which keeps running as the product is up
void loop() {

  //when the door is closed
  if (digitalRead(buttonPin) == 0)  // if the button goes low
  {
    Keyboard.print("door(\"closed\")");
    delay(100);
    Keyboard.write(0xB0);
    delay(1000);
    belloff();
    timer_val = millis();
    while (digitalRead(buttonPin) == 0){
      delay(100);
    }
  } 

  //when the door is open
  else{
    Keyboard.print("door(\"openned\")");
    delay(100);
    Keyboard.write(0xB0);
    delay(1000);
    turns += 1;

    // code below this is used to switch the intended function of the product
    // comment out the function which is unnecessary

    // function 1: sends emails after certain time intervals (modifiable).
//    if ( (millis () - timer_val) >= time_out) 
//      email();

    // function 2: sends emails after opening the door a certain number of times.
    if (turns == 10)
      email();
    while (digitalRead(buttonPin) == 1){
      delay(100);
        if ( (millis () - timer_val) >= time_out) 
          bellon(); //declared in "Bell.ino" file
    }
  }
}
