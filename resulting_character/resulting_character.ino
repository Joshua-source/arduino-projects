void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  char mychar = '4';
  int val = mychar-'0';
  mychar = (char)(val+'A'-1);
  Serial.println(mychar);
}
