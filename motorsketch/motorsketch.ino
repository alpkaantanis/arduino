#define btn_right       A0
#define btn_middle      A1
#define btn_left        A2

#define led_red         8
#define led_yellow      7
#define led_green       6

#define motor_Pin_1         2 //Activate
//#define motor_Pin_pwm_2     3 //L pwm (!saat yonu) 
//#define motor_Pin_pwm_7     5 //R pwm ( saat yonu)
int motorDir =3;  //3-R -- 5-L     
void setup()
{   
    pinMode(btn_right,INPUT);
    pinMode(btn_left,INPUT);
    pinMode(btn_middle,INPUT);    
  
    pinMode(motor_Pin_1, OUTPUT);     //Activate
  pinMode(motorDir, OUTPUT); //L pwm
    //pinMode(motor_Pin_pwm_7, OUTPUT); //R pwm
  
    pinMode(led_red,     OUTPUT);
    pinMode(led_yellow,  OUTPUT);
    pinMode(led_green,   OUTPUT);  
}
            
int pwm_val =1;
int motorOff=0;
int stopped_dir =0;

void check_btn()
{
  if(digitalRead(btn_right))
  {
    if(pwm_val < 10)
    {
      delay(100);
      pwm_val++;
    }
    if(motorOff==2){motorOff=0;pwm_val=1;}
  }
  if(digitalRead(btn_left))
  {
    if(pwm_val > 1)
    {
      delay(100);
      pwm_val--;
    }
    else if (pwm_val ==1)
    {
      if(motorOff < 2){delay(100); motorOff++;}
      else if(motorOff==2) {pwm_val=0;}
    }
  }
}

void check_dir()
{
  if(digitalRead(btn_middle))
  {
    if(motorDir==3 && pwm_val >0)
    {
      if(motorOff==2)
      {
        if(stopped_dir<2){stopped_dir++;}
        if(stopped_dir ==2) {motorOff=0;stopped_dir=0; motorDir=5; pwm_val=1;}
      }
      else
      {
      analogWrite(motorDir,0);
      motorDir=5;
      }
        
    }
    else if(motorDir==5 && pwm_val >0)
    {
      if(motorOff==2)
      {
        if(stopped_dir<2){stopped_dir++;}
        if(stopped_dir ==2) {motorOff=0;stopped_dir=0; motorDir=3; pwm_val=1;}
      }
      else
      {
      analogWrite(motorDir,0);
      motorDir=3;
      }
        
    }
  }
  
}

void loop(){
  check_btn();
  check_dir();
  if(motorOff ==2){
    analogWrite(motorDir,0);
    digitalWrite(led_green,HIGH);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_red,HIGH);
    //delay(100);
    digitalWrite(led_red,LOW);
    //delay(100);
  }
  if(pwm_val==1){
    analogWrite(motorDir,1);
    digitalWrite(led_green,LOW);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
    digitalWrite(led_red,HIGH);
  }
  if(pwm_val==2){
    analogWrite(motorDir,2);
    digitalWrite(led_green,HIGH);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
    digitalWrite(led_red,LOW);
  }
  if(pwm_val==3){
    analogWrite(motorDir,3);
    digitalWrite(led_green,HIGH);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
    digitalWrite(led_red,LOW);
  }
  if(pwm_val==4){
    analogWrite(motorDir,4);
    digitalWrite(led_green,HIGH);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
    digitalWrite(led_red,LOW);
  }
  if(pwm_val==5){
    analogWrite(motorDir,5);
    digitalWrite(led_green,HIGH);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
    digitalWrite(led_red,LOW);
    digitalWrite(led_yellow,LOW);
  }
  if(pwm_val==6){
    analogWrite(motorDir,6);
    digitalWrite(led_green,HIGH);
    digitalWrite(led_red,LOW);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
  }
  if(pwm_val==7){
    analogWrite(motorDir,7);
    digitalWrite(led_green,HIGH);
    digitalWrite(led_red,LOW);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
  }
  if(pwm_val==8){
    analogWrite(motorDir,8);
    digitalWrite(led_green,HIGH);
    digitalWrite(led_red,LOW);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
  }
  if(pwm_val==9){
    analogWrite(motorDir,9);
    digitalWrite(led_green,LOW);
    digitalWrite(led_red,HIGH);
    if(motorDir==3) {digitalWrite(led_yellow,LOW);}
    else {digitalWrite(led_yellow,HIGH);}
  }
  if(pwm_val==10){
    analogWrite(motorDir,10);
    digitalWrite(led_green,HIGH);
    digitalWrite(led_yellow,HIGH);
    digitalWrite(led_red,HIGH);
    delay(100);
    digitalWrite(led_red,LOW);
    delay(100);
  }
    
}
  
