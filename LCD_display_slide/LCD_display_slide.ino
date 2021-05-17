#include <LiquidCrystal.h>
#define Buton_1 A0
#define Buton_2 A1
#define Buton_3 A3


LiquidCrystal lcd(8, 7, 6, 5, 4, 3);

void setup() {
  pinMode(Buton_1,INPUT);
  pinMode(Buton_2,INPUT);
  pinMode(Buton_3,INPUT);
  lcd.begin(16, 2);
}
void btnoku_1()
{
 if(digitalRead(Buton_1))
 {
lcd.scrollDisplayLeft();
delay(250);
 }
}
void btnoku_2()
{
    if(digitalRead(Buton_2))
 {
    lcd.clear(); 
    delay(10);
    lcd.setCursor(2, 0);
    lcd.print("KKU  MMF EEM"); //2 soldan 2 sağdan ortalandı
    lcd.setCursor(0, 1); // 15 Karakter mevcut ortalanamaz
    lcd.print("170204006 DEN 2");
 }
}
void btnoku_3()
{
 if(digitalRead(Buton_3))
 {
  lcd.scrollDisplayRight();
  delay(250);
 }
}
void loop() 
{
  lcd.setCursor(2, 0);
  lcd.print("KKU  MMF BM"); //2 soldan 2 sağdan ortalandı
  lcd.setCursor(0, 1); // 15 Karakter mevcut ortalanamaz
  lcd.print("170000000 DEN 0");
  btnoku_1();
  btnoku_2();
  btnoku_3();


}
