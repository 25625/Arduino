#include<SoftwareSerial.h>
#define TxD 3
#define RxD 2
#define relay1 4
#define relay2 5
#define relay3 6
#define relay4 7
SoftwareSerial blue(TxD,RxD);
void setup() {
  // put your setup code here, to run once:
blue.begin(9600);
Serial.begin(9600);
pinMode(relay1,OUTPUT);
pinMode(relay2,OUTPUT);
pinMode(relay3,OUTPUT);
pinMode(relay4,OUTPUT);
digitalWrite(relay1,LOW);
digitalWrite(relay2,LOW);
digitalWrite(relay3,LOW);
digitalWrite(relay4,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
char a;
if(blue.available())
{
  a=blue.read();
  if(a=='0')
  {
       digitalWrite(relay1,HIGH);
//       break;
  }
   if(a=='1')
   {
       digitalWrite(relay2,HIGH);
//       break;
   }
   if(a=='2')
   {
        digitalWrite(relay3,HIGH);
//        break;
   }
   if(a=='3')
   {
        digitalWrite(relay4,HIGH);
//        break;
   }
   if(a=='4')
   {
        digitalWrite(relay1,LOW);
     //   break;
   }
   if(a=='5')
   {
        digitalWrite(relay2,LOW);
//       break;
   }
   if(a=='6')
   {
        digitalWrite(relay3,LOW);
//        break;
   }
   if(a=='7')
   {
        digitalWrite(relay4,LOW);
//        break;
   }
   if(a=='8')
   {
        digitalWrite(relay1,LOW);
        digitalWrite(relay2,LOW);
        digitalWrite(relay3,LOW);
        digitalWrite(relay4,LOW);
//        break;
   }
   if(a=='9')
   {
        digitalWrite(relay1,HIGH);
        digitalWrite(relay2,HIGH);
        digitalWrite(relay3,HIGH);
        digitalWrite(relay4,HIGH);
       // break;
   }
}
}
