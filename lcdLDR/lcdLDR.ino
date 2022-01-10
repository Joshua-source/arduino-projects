#include <LiquidCrystal.h>


LiquidCrystal lcd(12,11,5,4,3,2);


int led = 7;

void setup(){

  pinMode(led,OUTPUT);
  
  
  Serial.begin(115200);
  
  lcd.begin(16,2);
  
  lcd.setCursor(0,0);
  
  lcd.print("SmartLightSystem");

}

void loop()

{

lcd.setCursor(0,0);

lcd.print("SmartLightSystem");

int sensorValue= analogRead(A0);

Serial.println(sensorValue);

delay(1000);

if (sensorValue < 250)

{

lcd.setCursor(0,1);

lcd.print("LED OFF");

digitalWrite(led,LOW);



}

else

{

lcd.setCursor(0,1);

lcd.print("LED ON");

digitalWrite(led,HIGH);



}

}
