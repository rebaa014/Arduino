const int pot = A1; // arduino pin A1 or 15

void setup()
{
  pinMode(LED_BUILTIN, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int potIn = analogRead(pot);
  Serial.println(potIn);
  delay(100);
  
}
