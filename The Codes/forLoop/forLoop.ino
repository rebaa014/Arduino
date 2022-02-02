#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);

void setup() {
  Serial.begin(9600);

lcd.init();
lcd.backlight();

for(int i = 0; i < 10; i++){
      lcd.setCursor(1,0);
      lcd.print(i);
      delay(1000);
    }

  for(int i = 10; i >= 0; i--){
      lcd.setCursor(1,1);
      lcd.print(i);
      delay(1000);
 }
}

void loop() {  
  
}
