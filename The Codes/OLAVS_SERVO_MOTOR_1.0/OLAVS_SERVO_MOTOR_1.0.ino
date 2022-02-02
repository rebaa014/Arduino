/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin
const int button = 6;
int buttonState = 0;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead (button);
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 150);     // scale it to use it with the servo (value between 0 and 180)
                          // waits for the servo to get there

if (buttonState == HIGH){
   myservo.write(30); 
   delay(3000);
}

else if (buttonState == LOW){
    myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15);                             // waits for the servo to get there
}




  
}
