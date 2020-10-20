const int trigPin = 11;
const int echoPin = 10;
const int in1 = 2;
const int in2 = 3;
const int in3 = 4;
const int in4 = 5;

long duration, distance;

void loop()
{     
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  if(distance<30)
    {
      digitalWrite(in1, HIGH); 
      digitalWrite(in2, LOW); 
      digitalWrite(in3, LOW); 
      digitalWrite(in4, HIGH);
      delay(1200);
    }
    
  else
    {
      digitalWrite(in1, HIGH); 
      digitalWrite(in2, LOW); 
      digitalWrite(in3, HIGH); 
      digitalWrite(in4, LOW);
    }  
  delay(0);
}
