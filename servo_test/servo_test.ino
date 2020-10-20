#include<Servo.h>
Servo m;
int t;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
m.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
t=Serial.read();
m.write(60);
}
