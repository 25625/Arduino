#include <Servo.h>
Servo motor1, motor2, motor3, motor4;
char Recieved;
int minimum =10, maximum = 170;
int velocity;
int height30 = 30, height40 = 40, height50 = 50, height60 = 60, height70 = 70;
int height80 = 80, height90 = 90, height100 = 100, height110 = 110;
int height120 = 120, height130 = 130, height140 = 140, height150 = 150, height0 = 0;
//--------------------------------------
void motor_speed(int velocity) 
{
  velocity = map(velocity,0,150,minimum,maximum);
  motor1.write(velocity); 
  motor2.write(velocity);
  motor3.write(velocity);
  motor4.write(velocity); 
}
//----------------------------------------
void arming_motor()
{
  // arm the speed controller by setting speed to 0 and delay for 1 second. 
  // Some speed controllers may need longer delay.
  motor_speed(minimum);
  delay(2000);
  motor_speed(78);
  delay(200);
  motor_speed(minimum); 
}
//----------------------------------------
void setup() {
  Serial.begin(9600);
  motor1.attach(6);
  motor2.attach(9);
  motor3.attach(10);
  motor4.attach(11);
  arming_motor();
  Serial.println("Motor is Armed");
}
//----------------------------------------
void loop() {
  // put your main code here, to run repeatedly:
  while( Serial.available())
{
Recieved =Serial.read();
}
   if(Recieved == '1')
  {
   Serial.println(velocity);  
   motor_speed(height30);
  } 
  if(Recieved == '2')
  {
   velocity = 40;
   Serial.println(velocity);
   motor_speed(height40);
  } 
  if(Recieved == '3')
  {
  velocity = 50;  
  Serial.println(velocity);  
  motor_speed(height50);
  }
  if(Recieved == '4')
  {
  velocity = 60;
  Serial.println(velocity);  
  motor_speed(height60);
  }  
  if(Recieved == '5')
  {  
  velocity = 70;  
  motor_speed(height70);
  Serial.println(velocity);
  } 
  if(Recieved == '6')
  {
  velocity = 80;  
  motor_speed(height80);
  Serial.println(velocity);
  }  
  if(Recieved == '0')
  {  
  motor_speed(velocity);
  } 
  if(Recieved == '7')
  { 
 velocity = 90; 
  motor_speed(height90);
  Serial.println(velocity);   //motor stops here
  }
    if(Recieved == '8') 
  {
  velocity = 100; 
  motor_speed(height100);
  Serial.println(velocity);
  }
if(Recieved == '9') 
  {
  velocity = 110; 
  motor_speed(height110);
  Serial.println(velocity);
  }
}
