

int counter=0;

void setup() {

// put your setup code here, to run once:

  Serial.begin(115200);
  pinMode(2, INPUT);
  for (int led=8; led<=12; led++){
  pinMode(led, OUTPUT);

}
  Serial.println("your goal is to catch the BLUE led");
  

}

void loop() {
// put your main code here, to run repeatedly:
  for (int led=8; led<=12; led++){

  digitalWrite(led, HIGH);
  if(digitalRead(2)==HIGH && led==10){
  digitalWrite(led, HIGH);
  Serial.println("You caught the MIDDLE BLUE LED!");
  Serial.println(String(led)+" was hit");
  counter++;
}

else{

  delay(250);
  digitalWrite(led, LOW);
}

}
Serial.println("you got" + String(counter)+ " hits!");
if (counter>=5){
Serial.println("you got "+String(counter)+" hits, you won!");
}
else{
  Serial.println("Sorry, you lose!");
}
delay(100);

}
