#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,6,5,4,3);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);

   
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print("hi");
}
