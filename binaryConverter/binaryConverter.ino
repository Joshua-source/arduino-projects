int led2 = 12;
int led1 = 11;
int led0 = 10;
int counter=0;
void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  reset();
  for(int i = 0; i < 8; ++i) 
  { 
    counter=i;
    Serial.println(counter);
    signal( led2, ((i >> 2) % 2) == 1); 
    
    signal( led1, ((i >> 1) % 2) == 1); 
    
    signal( led0, ((i >> 0) % 2) == 1);
    
    delay(2000);
  }
}

// Set all LEDs off so that we start at zero
void reset() {
  signal( led2, 0);
  signal( led1, 0);
  signal( led0, 0);
}

void signal(int led, bool on) {
  if(on) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}
