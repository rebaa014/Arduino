// defines pins numbers
const int trigPin = 8;
const int echoPin = 7;
const int buzzer = 3;

long duration;
int distance;
int safetyDistance;




void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration*0.034/2;

  safetyDistance = distance;
  if(safetyDistance <= 5){
    digitalWrite(buzzer, HIGH);
    analogWrite(11, 255);
    analogWrite(10, 0);
    analogWrite(9, 0);
    }
  
  if(safetyDistance > 5 && safetyDistance <= 10){
    analogWrite(11, 255);
    analogWrite(10, 0);
    analogWrite(9, 70);
    digitalWrite(buzzer, LOW);
    }
  if(safetyDistance > 10){
    analogWrite(11, 0);
    analogWrite(10, 0);
    analogWrite(9, 255);
    digitalWrite(buzzer, LOW);
    }
  delay(10);

  Serial.print("Distance: ");
  Serial.println(distance);

  delay(10);
    

  

}
