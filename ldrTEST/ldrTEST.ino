

int lightPen=A0;
int lightVal;
int dv=250;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPen,INPUT);
  Serial.begin(115200);
}

void loop() {
lightVal=analogRead(lightPen);
Serial.println(lightVal);
delay(dv);

//if (lightVal>350){
//  digitalWrite(greenPin,HIGH);
//  digitalWrite(redPin,LOW);
//}
//if (lightVal<350){
//    digitalWrite(greenPin,LOW);
//  digitalWrite(redPin,HIGH);
//}

}
