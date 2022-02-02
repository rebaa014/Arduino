// defines pins numbers
const int trigPin = 8;
const int echoPin = 7;
const int buzzer = 12;


// defines variables
long duration;
int distance;
int safetyDistance;
int x = 0;


void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);

Serial.begin(9600); // Starts the serial communication

}


void loop() {
  x = 0.006783*(trigPin, echoPin);
  if (x < 5) {
    analogWrite(11, 255);
    analogWrite(10, 0);
    analogWrite(9, 0);
  }
  if (x > 5 && x <= 10) {
    analogWrite(11, 51);
    analogWrite(10, 51);
    analogWrite(9, 255);
  }
  if (x > 10) {
    analogWrite(11, 51);
    analogWrite(10, 255);
    analogWrite(9, 51);
  }
  delay(10);
  
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

safetyDistance = distance;
if (safetyDistance <= 5){
  digitalWrite(buzzer, HIGH);
  
}
else{
  digitalWrite(buzzer, LOW);
  
}


// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
