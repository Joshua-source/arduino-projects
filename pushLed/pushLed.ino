
int led_red = 8;
int button = 2;
int val = 0;
void setup()
{ Serial.begin(115200);
  pinMode(led_red, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  val = digitalRead(button);
  Serial.print(val);
  if (val == HIGH) {
  digitalWrite(led_red,HIGH);
} 
  else digitalWrite    (led_red, LOW);
}
