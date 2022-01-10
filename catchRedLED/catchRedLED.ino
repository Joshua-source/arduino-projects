void setup() {

// put your setup code here, to run once:

Serial.begin(115200);

pinMode(3, INPUT);

for (int led=8; led<=12; led++){

pinMode(led, OUTPUT);

}

Serial.println("Welcome to Catch the LED!");

Serial.println("Your goal is to catch the red LED");

}

void loop() {

// put your main code here, to run repeatedly:

for (int led=8; led<=12; led++){

digitalWrite(led, HIGH);

if(digitalRead(3)==HIGH && led==10){

digitalWrite(led, HIGH);

Serial.println("You caught the red LED!");

}

else{

Serial.println("Sorry, you lose!");

delay(150);

digitalWrite(led, LOW);

}

}
}
