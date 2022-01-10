int a[5] = {9,2,42,5,8};
int *pointer = &a[0];
void setup() {
  Serial.begin(115200);
}
void loop() {
Serial.print("Address of pointer is %d\n",pointer);
Serial.print("Value of pointer is %d\n\n",*pointer);
pointer++;;
delay(3000);
}
