#define Buton_1 A0
#define Buton_2 A1
#define Buton_3 A2
#define Buton_4 A4
#define Buton_5 A5
#define Buton_6 A3
#define Buton_7 1
#define Buton_8 2
#define Led_1 3
#define Led_2 4
#define Led_3 5
#define Led_4 6
#define Led_5 7
#define Led_6 8
#define Led_7 9
#define Led_8 10
#define Buzzer 12
int LedPin[]={10,9,8,7,6,5,4,3};
int btndrm_1=0;
int btndrm_2=0;
int btndrm_3=0;
int btndrm_4=0;
int btndrm_5=0;
int btndrm_6=0;
int btndrm_7=0;
int btndrm_8=0;
void setup()
{
pinMode(Buton_1,INPUT);
pinMode(Buton_2,INPUT);
pinMode(Buton_3,INPUT);
pinMode(Buton_4,INPUT);
pinMode(Buton_5,INPUT);
pinMode(Buton_6,INPUT);
pinMode(Buton_7,INPUT);
pinMode(Buton_8,INPUT);
pinMode(Led_1,OUTPUT);
pinMode(Led_2,OUTPUT);
pinMode(Led_3,OUTPUT);
pinMode(Led_4,OUTPUT);
pinMode(Led_5,OUTPUT);
pinMode(Led_6,OUTPUT);
pinMode(Led_7,OUTPUT);
pinMode(Led_8,OUTPUT);
pinMode(Buzzer,OUTPUT);
}
void btnoku_1()
{
 if(digitalRead(Buton_1))
 {
 btndrm_1= btndrm_1+1;
 delay(200);
 }

}
void btnoku_2()
{
 if(digitalRead(Buton_2))
 {
 btndrm_2= btndrm_2+1;
 delay(200);
 }

}
void btnoku_3()
{
 if(digitalRead(Buton_3))
 {
 btndrm_3= btndrm_3+1;
 delay(200);
 }

}
void btnoku_4()
{
 if(digitalRead(Buton_4))
 {
 btndrm_4= btndrm_4+1;
 delay(200);
 }

}
void btnoku_5()
{
 if(digitalRead(Buton_5))
 {
 btndrm_5=btndrm_5+1;
 delay(200);
 }

}
void btnoku_6()
{
 if(digitalRead(Buton_6))
 {
 btndrm_6= btndrm_6+1;
 delay(200);
 }

}
int btnsayac_7=1;
void btnoku_7()
{
 if(digitalRead(Buton_7))
 {
 btndrm_7= btndrm_7+btnsayac_7;
 btnsayac_7++;
 delay(200);
 }
}
void btnoku_8()
{
 if(digitalRead(Buton_8))
 {
 btndrm_8= btndrm_8+1;
 delay(200);
 }

}
 void asama1()
{
 if(btndrm_1==3)
{
 digitalWrite(Led_1,HIGH);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,LOW);
 digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,LOW);
 delay (2000);
 btndrm_1=0;
 }
 }
void asama2()
{
 btndrm_2=0;
 for(int i =3;i<11;i++)
 {
 digitalWrite(i,HIGH);
 delay(100);
 }
}
void asama3()
{
 btndrm_3=0;
 for(int i =11;i>3;i--)
 {
 digitalWrite(i,HIGH);
 delay(100);
 }
}
void binaryct()
{
 for(int i=0;i<256;i++)
 {
 asama4(i);
 delay(600);
 }
}
void asama4(int sayi)
{
 for(int i=0;i<8;i++)
 {
 if(bitRead(sayi,i)==1)
 {
 digitalWrite(LedPin[i],HIGH) ;
 }
 else
 {
 digitalWrite(LedPin[i],LOW) ;
 }
 btndrm_4=0;
}
 }
void asama5()
{
 btndrm_5=0;
 digitalWrite(Led_1,HIGH);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,HIGH);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,HIGH);
 digitalWrite(Led_6,LOW);
 digitalWrite(Led_7,HIGH);
 digitalWrite(Led_8,LOW);
 delay(1000);
 btndrm_5=0;

 }
void asama6()
{
 btndrm_6=0;
 digitalWrite(Led_1,LOW);
 digitalWrite(Led_2,HIGH);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,HIGH);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,HIGH);
 digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,HIGH);
 delay(1000);
 btndrm_6=0;

 }
 void asama7()
 {
 digitalWrite(Led_1,LOW);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,LOW);
 digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,LOW);
 delay(1500);
}
void asama8()
 {
 digitalWrite(11,HIGH);
 delay(200);
 digitalWrite(11,LOW);
}
bool functionState=true;
void loop()
{
 if(functionState)
 {
 digitalWrite(Led_1,HIGH);
 digitalWrite(Led_2,HIGH);
 digitalWrite(Led_3,HIGH);
 digitalWrite(Led_4,HIGH);
 digitalWrite(Led_5,HIGH);
 digitalWrite(Led_6,HIGH);
 digitalWrite(Led_7,HIGH);
 digitalWrite(Led_8,HIGH);

 }

 if(btndrm_1==3)
 {
 digitalWrite(Led_1,HIGH);
 digitalWrite(Led_2,HIGH);
 digitalWrite(Led_3,HIGH);
 digitalWrite(Led_4,HIGH);
 digitalWrite(Led_5,HIGH);
 digitalWrite(Led_6,HIGH);
 digitalWrite(Led_7,HIGH);
 digitalWrite(Led_8,HIGH);
 delay(500);
 asama1();
 }
 if(btndrm_2==1)
 {
 digitalWrite(Led_1,LOW);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,LOW);
 digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,LOW);
 delay(1000);
 btndrm_2=0;
 asama2();
 }
if(btndrm_3==1)
 {
 digitalWrite(Led_1,LOW);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,LOW);
digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,LOW);
 delay(1000);
 btndrm_3=0;
 asama3();
 }
if(btndrm_4==1)
 {
 digitalWrite(Led_1,LOW);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,LOW);
 digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,LOW);
 delay(1000);
 btndrm_4=0;
 binaryct();
 }
 if(btndrm_5==1)
 {
 digitalWrite(Led_1,LOW);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,LOW);
 digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,LOW);
 delay(1500);
 btndrm_5=0;
 asama5();
 }
 if(btndrm_6==1)
 {
 digitalWrite(Led_1,LOW);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,LOW);
 digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,LOW);
 delay(1500);
 btndrm_6=0;
 asama6();
 }
 if(btndrm_7==1)
 {
 functionState=false;
 asama7();
 digitalWrite(Led_1,HIGH);
 delay(400);
 btndrm_7=0;
 }
 if(btndrm_7==2)
 {
 digitalWrite(Led_1,LOW);
 delay(100);
 digitalWrite(Led_2,HIGH);
 delay(100);
 btndrm_7=0;

 }
 if(btndrm_7==3)
 {
 digitalWrite(Led_2,LOW);
 delay(100);
 digitalWrite(Led_3,HIGH);
 delay(100);
 btndrm_7=0;

 }
 if(btndrm_7==4)
 {
 digitalWrite(Led_3,LOW);
 delay(100);
 digitalWrite(Led_4,HIGH);
 delay(100);
 btndrm_7=0;
 }
 if(btndrm_7==5)
 {
 digitalWrite(Led_4,LOW);
 delay(100);
 digitalWrite(Led_5,HIGH);
 delay(100);
 btndrm_7=0;
 }
 if(btndrm_7==6)
 {
 digitalWrite(Led_5,LOW);
 delay(100);
 digitalWrite(Led_6,HIGH);
 delay(100);
 btndrm_7=0;
 }
 if(btndrm_7==7)
 {
 digitalWrite(Led_6,LOW);
 delay(100);
 digitalWrite(Led_7,HIGH);
 delay(100);
 btndrm_7=0;
 }
 if(btndrm_7==8)
 {
 digitalWrite(Led_7,LOW);
 delay(100);
 digitalWrite(Led_8,HIGH);
 delay(100);
 btndrm_7=0;
 btnsayac_7=0;
 functionState=true;
 }

 if(btndrm_8==1)
 {
 functionState=false;
 digitalWrite(Led_1,LOW);
 digitalWrite(Led_2,LOW);
 digitalWrite(Led_3,LOW);
 digitalWrite(Led_4,LOW);
 digitalWrite(Led_5,LOW);
 digitalWrite(Led_6,LOW);
 digitalWrite(Led_7,LOW);
 digitalWrite(Led_8,LOW);
 digitalWrite(12,HIGH);
 delay(200);
 digitalWrite(12,LOW);
 delay(200);
 }
 btnoku_1();
 btnoku_2();
 btnoku_3();
 btnoku_4();
 btnoku_5();
 btnoku_6();
 btnoku_7();
 btnoku_8();
}
