#include<Servo.h>
#include <MPU6050_tockn.h>
#include <Wire.h>

MPU6050 mpu6050(Wire);
Servo m1;
Servo m2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
  m1.attach(9);
  m2.attach(10);
  m1.write(50);
  m2.write(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  m1.write(65+mpu6050.getAccX()+mpu6050.getAccY()+mpu6050.getAccZ());
  m2.write(65+mpu6050.getAccX()+mpu6050.getAccY()+mpu6050.getAccZ());

}
