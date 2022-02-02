/*
 * Blink
 * turns onboard led on and off
 * 
 * by Reha
 */

int led = 13;                                                                              

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  digitalWrite(led, HIGH) //turn led on
  delay(1000); //pause
  digitalWrite(led, LOW) //turn led off
  delay(1000); //pause
  
}
