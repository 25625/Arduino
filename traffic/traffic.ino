int r1 = 2;
int r2 = 3;
int r3 = 4;
int r4 = 5;
int y1 = 6;
int y2 = 7;
int y3 = 8;
int y4 = 9;
int g1 = 10;
int g2 = 11;
int g3 = 12;
int g4 = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(y3,OUTPUT);
  pinMode(y4,OUTPUT);
  pinMode(g1,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(g4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(g1,HIGH); //stage 1
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(g4,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(y3,LOW);
  digitalWrite(y4,LOW);
  delay(30000);
  digitalWrite(y2,HIGH);// stage2
  digitalWrite(y1,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(y3,LOW);
  digitalWrite(y4,LOW);
  digitalWrite(g1,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(g4,LOW);
  delay(5000);
  digitalWrite(g2,HIGH);// stage 3
  digitalWrite(r1,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(g1,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(g4,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(y3,LOW);
  digitalWrite(y4,LOW);
  delay(30000);
  digitalWrite(y2,HIGH);// stage 4
  digitalWrite(y3,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r4,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,LOW);
  digitalWrite(y4,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(g1,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(g4,LOW);
  delay(5000);
  digitalWrite(g3,HIGH);// stage 5
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r4,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(g1,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g4,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(y3,LOW);
  digitalWrite(y4,LOW);
  delay(30000);
  digitalWrite(y3,HIGH);// stage 6
  digitalWrite(y4,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(g1,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(g4,LOW);
  delay(5000);
  digitalWrite(g4,HIGH);// stage 7
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  digitalWrite(g1,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(y3,LOW);
  digitalWrite(y4,LOW);
  delay(30000);
  digitalWrite(y1,HIGH);// stage 8
  digitalWrite(y4,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(r4,LOW);
  digitalWrite(y3,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(g1,LOW);
  digitalWrite(g2,LOW);
  digitalWrite(g3,LOW);
  digitalWrite(g4,LOW);
  delay(5000);
}
