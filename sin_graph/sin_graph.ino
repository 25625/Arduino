#include<SoftwareSerial.h>
#include<FreqCount.h>
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
FreqCount.begin(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
//double a;
//for(a=0;a<=360;a++)
//{
//  Serial.println(20*sin(180*a));
//}
if(FreqCount.available())
{
 float cou = FreqCount.read();
 float per = (1/cou);
 Serial.print("freq");
 Serial.println(cou);
 Serial.print("time");
 Serial.println(per); 
}
delay(1000);
}
