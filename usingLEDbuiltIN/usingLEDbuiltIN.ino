const byte ledPin = LED_BUILTIN; //using LED_BUILTIN which is the LED light of the arduino board
const int timeUnitDot = 300; //define dot as 1 unit = 300ms
const int timeUnitDash = 900; //define dash as 3 unit = 900ms

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin ledPin as an output.
  pinMode(ledPin, OUTPUT);
  forloopSOS();
}

void forloopSOS() {
for(int i = 0; i < 3; i++){
//this loop will run 3 times
//morsing letter "S" using the international morse code given = 3 dots
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot);                     
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot);                     
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot); 
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDash);
  
  //morsing letter "0" using the international morse code given = 3 dashes
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDash);                     
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot);                    
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDash); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot); 
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDash); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDash);

  //morsing letter "S" using the international morse code given = 3 dots
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot);                       
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot);                      
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot); 
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDash); 
}
}

// the loop function runs over and over again forever
void loop() {
  //empty loop
}
