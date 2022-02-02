
int x = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  x = 0.006783 * readUltrasonicDistance(8, 7);
  if (x < 5) {
    analogWrite(11, 255);
    analogWrite(10, 0);
    analogWrite(9, 0);
  }
  if (x >= 5 && x <= 10) {
    analogWrite(11, 51);
    analogWrite(10, 51);
    analogWrite(9, 255);
  }
  if (x > 10) {
    analogWrite(11, 51);
    analogWrite(10, 255);
    analogWrite(9, 51);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
