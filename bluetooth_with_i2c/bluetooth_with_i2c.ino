#include <LiquidCrystal_I2C_AvrI2C.h>
#define Led_1 13
LiquidCrystal_I2C_AvrI2C lcd(0x3f,16,2);
 char veri;

void setup() {
  Serial.begin(9600);
  pinMode(Led_1,OUTPUT);
  lcd.begin();
}

void loop() {
  if(Serial.available())
  {
    veri=Serial.read();
    }
    if (veri=='F'){
  lcd.clear();
    delay(10);
  lcd.setCursor(0, 0);
  lcd.print("Ileri");
  lcd.setCursor(0, 1);
  lcd.print("Tusuna Basildi ");
    delay(10);
      }
      if (veri=='B'){
  lcd.clear();
    delay(10);
  lcd.setCursor(0, 0);
  lcd.print("Geri");
  lcd.setCursor(0, 1);
  lcd.print("Tusuna Basildi ");
    delay(10);
      }
      if (veri=='L'){
  lcd.clear();
    delay(10);
  lcd.setCursor(0, 0);
  lcd.print("Sol");
  lcd.setCursor(0, 1);
  lcd.print("Tusuna Basildi ");
    delay(10);
      }
      if (veri=='R'){
  lcd.clear();
    delay(10);
  lcd.setCursor(0, 0);
  lcd.print("Sag ");
  lcd.setCursor(0, 1);
  lcd.print("Tusuna Basildi ");
    delay(10);
      }
      if (veri=='W'){
  digitalWrite(Led_1,HIGH);
  lcd.clear();
    delay(10);
  lcd.setCursor(0, 0);
  lcd.print("On Isik Acma");
  lcd.setCursor(0, 1);
  lcd.print("Tusuna Basildi ");
    delay(10);
      }
      if (veri=='w'){
  digitalWrite(Led_1,LOW);
  lcd.clear();
    delay(10);
  lcd.setCursor(0, 0);
  lcd.print("On Isik kapatma");
  lcd.setCursor(0, 1);
  lcd.print("Tusuna Basildi ");
    delay(10);
      }
  
}
