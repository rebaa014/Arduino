/*
L293D_motorControl

Components: 

Arduino

Breadboard

Cabels



Circuit: 



*/

const int enable12 = 3; //PWM to enable 1&2 on the L293D

const int input1 = 4; //Digital pin to input 1A

const int input2 = 5; //Digital pin to input 2A


void setup() {
  
  pinMode(enable12, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  
  
}

void loop(){
  
  analogWrite(enable12, 255); //PWM 0 - 255 for motor speed control
  
  //motor direction (reverse)
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);


}
