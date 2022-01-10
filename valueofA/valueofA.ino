void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  int a = 1;
  for(int i = 0; i < 5; i++){
    a += a;
    Serial.println(a);
  }
  Serial.println(a);
}

void loop() {
  // put your main code here, to run repeatedly:

}
