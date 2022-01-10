#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int lightPen=A0;
int lightVal;
int dv=250;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode(lightPen,INPUT);
Serial.begin(115200);

}

void loop() {
lcd.setCursor(0,0);
lcd.print("sensor value");
lightVal=analogRead(lightPen);
Serial.println(lightVal);
//delay(dv);
lcd.setCursor(0,1);
lcd.print(String(lightVal));
delay(500);
lcd.clear();
}
