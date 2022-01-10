void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  char c;
  for (int i = 0; i < 4; i++) {
  c = '0' + i*2;
  Serial.print(c);
  Serial.println("\xC2\xB0");
  delay(1000);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
