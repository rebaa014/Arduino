/*
* ledFading
* 
* This program will implement analogWrite() as an "analog"
* output signal to control the light strength of an LED.
*
* circuit:
* LED connected to Arduino pin 5 (PWM)
*
* created 20 sep 2021
* by Colin Vinson 
*/

//define arduino pins
const int led = 5;  //PWM pin 5

void setup(){
  //define inputs/outputs
  pinMode(led, OUTPUT);
}

void loop(){
  //analogWrite(pin, PWM): PWM must be a value between 0-255
  analogWrite(led, 25); // 25:255 = 10% duty cycle
  delay(2000); // Wait for 1000 millisecond(s)
  analogWrite(led, 64); // 25% duty cycle
  delay(2000);
  analogWrite(led, 128); // 50% duty cycle
  delay(2000); 
  analogWrite(led, 191); // 75% duty cycle
  delay(2000);
  analogWrite(led, 255); // 100% duty cycle
  delay(2000);  
}
