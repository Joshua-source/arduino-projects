char mychar = '4';
int val = mychar-'0';
mychar = (char)(val+'A'-1);

void setup() {
Serial.begin(115200);
}

void loop() {
//if (Serial.available() > 0) {

 Serial.print(mychar);

}
