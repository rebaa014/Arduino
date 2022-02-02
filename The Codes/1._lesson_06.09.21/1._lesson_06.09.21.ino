/*Her skriver jeg hva som skjer
*
*Veldig heftig
*
*av Reha
*/

#include <Wire.h> //include all nessesary libraries

//declarations; all global variables
int led = 13; //INBUILT LED connected to board pin 13

void setup() {
  // put your setup code here, to run once:
  //declare inputs/outputs
  pinMode(led, OUTPUT); //declares led(pin 13) as an outpt signal
  }

void loop() {
  // put your main code here, to run repeatedly:
  /*
   * Read inputs 
   * Manipulate data
   * Output
   */
  digitalWrite(led, HIGH);     //turn on led (HIGH = 3.3V - 5V output
  delay(1000);   //wait for 1 second  (1s =1000ms)
  digitalWrite(led, LOW); //turn off led (LOW = 0V output throgh pin
  delay(1000);  //wait 1 second
}
