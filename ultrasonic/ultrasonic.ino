#include <LiquidCrystal.h>
#define led_yesil A0
#define led_sari A1
#define led_kirmizi A2
#define buzzer A3
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int trig = 9;
const int echo = 8;

int mesafe ;
int sure;

void setup()
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  pinMode(led_yesil , OUTPUT);
  pinMode(led_sari , OUTPUT);
  pinMode(led_kirmizi , OUTPUT);
  pinMode(buzzer , OUTPUT);
  lcd.begin(16, 2);
}
void mesafe_1()
{
  digitalWrite(led_yesil,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(50);
  digitalWrite(led_yesil,LOW);
  digitalWrite(buzzer,LOW);
  delay(100);
}
void mesafe_2()
{ 
  digitalWrite(led_sari,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(50);
  digitalWrite(led_sari,LOW);
  digitalWrite(buzzer,LOW);
  delay(50);
}
void mesafe_3()
{
  digitalWrite(led_kirmizi,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(10);
  digitalWrite(led_kirmizi,LOW);
  digitalWrite(buzzer,LOW);
  delay(10);
 }
void mesafe_4(){
  digitalWrite(led_sari,HIGH);
  yesil_yak()
  delay(50);
  digitalWrite(led_sari,LOW);
  yesil_son();
  delay(50);
}
void yesil_yak(){
  digitalWrite(led_yesil,HIGH);
}
void yesil_son(){
    digitalWrite(led_yesil,LOW);
}
void mesafe_5(){
  digitalWrite(led_kirmizi,LOW);
  digitalWrite(led_yesil,LOW);
  digitalWrite(led_sari,LOW);
  digitalWrite(buzzer,LOW);
}
void loop()
{
    digitalWrite(trig , HIGH);
    delay(1);
    digitalWrite(trig , LOW);

    sure = pulseIn(echo, HIGH);
    mesafe = (sure / 2) / 28.5;

    lcd.home();
    lcd.print("mesafe = ");
    lcd.setCursor(0,1);
    lcd.print(mesafe);
    lcd.print("cm");
    delay(250);

    if(mesafe<100&&mesafe>50) {mesafe_1();}
    else if(mesafe<50&&mesafe>25) {mesafe_2();}
    else if(mesafe<25&&mesafe>10) {mesafe_3();}
    else if(mesafe<10) {
        digitalWrite(led_kirmizi,HIGH);
        digitalWrite(buzzer,HIGH);
        mesafe_4();
        }
    else {mesafe_5();}
}
