
#include <Servo.h>

#include "MeMegaPi.h"

MeMegaPiDCMotor motorR(PORT1B);

MeMegaPiDCMotor motorL(PORT2B);

MeUltrasonicSensor ultraSensor(PORT_8); /* Ultrasonic module can ONLY be connected to port 3, 4, 6, 7, 8 of base shield. */

Servo myproservo;

uint8_t motorSpeed = 100;

void setup()
{
  Serial.begin(9600);

  myproservo.attach(62);
}



void loop()
{

 forward(motorSpeed);

  myproservo.write(132);
  

  Serial.print("Distance : ");
  Serial.print(ultraSensor.distanceCm() );
  Serial.println(" cm");
  delay(100); /* the minimal measure interval is 100 milliseconds */

  if(ultraSensor.distanceCm() < 5){
    bak(motorSpeed);
    delay(1000);
    turnRight(motorSpeed);
    delay(1000);
    
   }

 

 
}

void forward(int motorSpeed){
  motorR.run(-motorSpeed); //right motor (- forward) Port 1B
  motorL.run(motorSpeed); //left motor  (+ forward) Port 2B
  }
  
void bak(int motorSpeed){
  motorR.run(motorSpeed); //right motor (- forward) Port 1B
  motorL.run(-motorSpeed); //left motor  (+ forward) Port 2B
  }
  
void turnRight(int motorSpeed){
  motorR.run(motorSpeed);
  motorL.run(motorSpeed);
  }

void turnLeft(int motorSpeed){
  motorR.run(-motorSpeed);
  motorL.run(-motorSpeed);
  }

void stop(){
  motorR.stop();
  motorL.stop();
}








  
