int pir = 2;
int led = 4;
int pir_val=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  pir_val=digitalRead(pir);
  if(pir_val==1)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
