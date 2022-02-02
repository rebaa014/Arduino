#include <Servo.h>

Servo servo_test; 


void setup() {
  servo_test.attach(62);

}

void loop() {
  servo_test.write(132);

}
