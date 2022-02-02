
/*
By Reha

Date: 20.11.2021

The task of the rover is that when it approaches a wall, it stops and turns and continues on the road. It does so with an Ultrasonic sensor on it.



*/




// include necessary libraries:
#include "MeMegaPi.h"

 
//create objects and variables for sensor and motor control
//objects give us access to the functions we need to control the sensor and motors
MeMegaPiDCMotor motorR(PORT1B); //Left motor

MeMegaPiDCMotor motorL(PORT2B); //Right motor

MeUltrasonicSensor ultraSensor(PORT_8); /* Ultrasonic module can ONLY be connected to port 3, 4, 6, 7, 8 of base shield. */


//create variable for motor power
uint8_t motorSpeed = 100;

//Under void setup we write the functions that we only want to work 1 time
void setup()
{
 
  Serial.begin(9600); //

  
}


//commands that repeat themselves over and over
void loop()
{

 forward(motorSpeed); //It will always go forward

  //It will write to console how many cm is distance between the object and sensor
Serial.print("Distance : ");
  Serial.print(ultraSensor.distanceCm() );
  Serial.println(" cm");
  delay(100); /* the minimal measure interval is 100 milliseconds */

//If distance between rover and object is less den 10 cm go back and turn right
  if(ultraSensor.distanceCm() < 10){
    bak(motorSpeed);
    delay(1000);
    turnRight(motorSpeed);
    delay(1000);
   }

 

 
}

//identify “forward” and other direction control
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
