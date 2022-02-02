/*
 * Button
 * 
 * Turns on and off a light emitting diode(LED) connected to digital pin 4,
 * when pressing a pushbutton attached to pin 2.
 * The circuit:
 *  - Button terminal 1a connected in series with a 10kOhm resistor to GND
 *  - Button terminal 1b connected to pin 2
 *  - LED cathode connected in series with a 220 Ohm resistor to GND
 *  - LED anode connected to pin 4
 *  
 * created 11 sep 2020
 * by Colin Vinson
 * modified 12 sep 2021
 * 
 * https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button
*/

// define Arduino pins. NOTE:Constant data type will not change.
const int led =  7;  // the number of the LED pin
const int button = 6;  // the number of the pushbutton pin
const int led1 = 5;
const int button1 = 4;
const int led2 = 3;
const int button2 =2;

// define global variables
int buttonState = 0;  // variable for reading the pushbutton status
int buttonState1 = 0;
int buttonState2 = 0;


void setup(){
  // initialize the LED pin as an output
  pinMode(led, OUTPUT);
  // initialize the pushbutton pin as an input
  pinMode(button, INPUT);

  pinMode(led1, OUTPUT);

  pinMode(button1, INPUT);

  pinMode(led2, OUTPUT);

  pinMode(button2, INPUT);
}

void loop(){
  // read the state of the pushbutton value
  buttonState = digitalRead(button); //HIGH = button depressed

  buttonState1 = digitalRead(button1);

  buttonState2 = digitalRead(button2);

  // check if the pushbutton is pressed. If buttonState is HIGH, turn on LED
  if (buttonState == HIGH){
    digitalWrite(led, HIGH); // turn LED on
  } 
  else{
    digitalWrite(led, LOW);  // turn LED off:
  }

  if (buttonState1 == HIGH){
    digitalWrite(led1, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
  }

  if (buttonState2 == HIGH){
    digitalWrite(led2, HIGH); // turn LED on
  } 
  else{
    digitalWrite(led2, LOW);  // turn LED off:
  }
  
}
