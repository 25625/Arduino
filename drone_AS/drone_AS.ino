#include<Servo.h>
Servo m1;
Servo m2;
Servo m3;
Servo m4;
int value1=65;
int value2=65;
int value3=65;
int value4=65;
int t;
int trig_pin1 = 2;
int echo_pin1 = 3;
int trig_pin2 = 4;
int echo_pin2 = 5;
int buzzer_out = 13;
float temp;
long int distance,duration;
void setup() 
  {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig_pin1,OUTPUT);
  pinMode(echo_pin1,INPUT);
  pinMode(buzzer_out,OUTPUT);
  pinMode(temp,INPUT);
  pinMode(trig_pin2,OUTPUT);
  pinMode(echo_pin2,INPUT);
  m1.attach(6);
  m2.attach(7);
  m3.attach(8);
  m4.attach(9);
  m1.write(10);
  m2.write(10);
  m3.write(10);
  m4.write(10);
  }

void temperature() {
  // put your main code here, to run repeatedly:
   temp = analogRead(A0);
   temp=temp*0.48828125;
   Serial.print("temparature :");
   Serial.print(temp);
   Serial.print("*c");
   Serial.println("");
}
void uss()
{
  digitalWrite(trig_pin2,LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin2,HIGH);
  duration = pulseIn(echo_pin2,HIGH);
  distance=duration/58.2;
  Serial.print("height : ");
  Serial.print(distance);
  Serial.print(".cm");
  Serial.println(" ");
}
void motor()
{
  if(Serial.available()>0)
  {
    t=Serial.read();
    Serial.println(t);
    if(t=='1')//DOWN
    {
      value1=value1-2;
      value2=value2-2;
      value3=value3-2;
      value4=value4-2;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
    Serial.println(value1);
    Serial.println(value2);
    Serial.println(value3);
    Serial.println(value4);
    }
    if(t=='0')//UP
    {
      value1=value1+2;
      value2=value2+2;
      value3=value3+2;
      value4=value4+2;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
    Serial.println(value1);
    Serial.println(value2);
    Serial.println(value3);
    Serial.println(value4);
    }
    if(t=='5')//LEFT
    {
      value1=value1;
      value2=value2+4;
      value3=value3+4;
      value4=value4;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
      value2=value2-4;
      value3=value3-4;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
    Serial.println(value1);
    Serial.println(value2);
    Serial.println(value3);
    Serial.println(value4);
    }
    if(t=='2')//forword
    {
      value1=value1;
      value2=value2;
      value3=value3+4;
      value4=value4+4;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
      value3=value3-4;
      value4=value4-4;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
    Serial.println(value1);
    Serial.println(value2);
    Serial.println(value3);
    Serial.println(value4);
    }
    if(t=='3')//backward
    {
      value1=value1+4;
      value2=value2+4;
      value3=value3;
      value4=value4;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
      value1=value1-4;
      value2=value2-4;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
      Serial.println(value1);
      Serial.println(value2);
      Serial.println(value3);
      Serial.println(value4);
    }
    if(t=='4')//right
    {
      value1=value1+4;
      value2=value2;
      value3=value3;
      value4=value4+4;
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      m4.write(value4);
      value4=value4-4;
      value1=value1-4;
      m4.write(value4);
      m1.write(value1);
      m2.write(value2);
      m3.write(value3);
      Serial.println(value1);
      Serial.println(value2);
      Serial.println(value3);
      Serial.println(value4);
    
    }
    if(t=='6')
    {
      for(int i=value1;i<=50;i--)
      {
       value1=40;
       value2=40;
       value3=40;
       value4=40;
       m1.write(value1);
       m2.write(value2);
       m3.write(value3);
       m4.write(value4);
       Serial.println(value1);
       Serial.println(value2);
       Serial.println(value3);
       Serial.println(value4);
    }
    
  }
  
}
  
}
void obstracle()
{
  
}
void loop()
{
  // temperature();
   //uss();
   motor();
  // obstracle();
}
