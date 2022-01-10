const byte ledPin = 10; //using digital pin 10 on the arduino uno
const int timeUnitDot = 300; //define dot as 1 unit = 300ms
const int timeUnitDash = 900; //define dash as 3 unit = 900ms

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin ledPin as an output
  pinMode(ledPin, OUTPUT);
}


void loop() {
  // morsing my name JOSHUA
  //morsing letter "J" using the international morse code given = 1 DOT AND 3 DASHES
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot);                       
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot);                      
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

  //morsing letter "H" using the international morse code given = 4 dots
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
  delay(timeUnitDot);
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDash);

  //morsing letter "U" using the international morse code given = 2 DOTS AND A DASH
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot);                       
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot);                      
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot); 
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDash); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDash);

  //morsing letter "A" using the international morse code given = 1 DOT AND A DASH
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDot);                       
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDot);
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timeUnitDash); 
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(timeUnitDash);   
}
