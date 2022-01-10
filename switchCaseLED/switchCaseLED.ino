const int LED1 = 7;
const int LED2 = 8;
const int LED3 = 9;
const int LED4 = 10;
const int LED5 = 11;

void setup() {
  // initialize serial communication:
  Serial.begin(115200);
  // initialize the LED pins:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT); 
}

void loop() {
  // read the sensor:
  if (Serial.available() > 0) {
    int inByte = Serial.read(); //reading each character

    switch (inByte) {
      case 'a':
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW);
        break;
      case 'b':
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW);
        break;
      case 'c':
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW);
        break;
      case 'd':
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, HIGH);
        digitalWrite(LED5, LOW);
        break;
      case 'e':
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, HIGH);
        break;
      default:
        // turn all the LEDs off:
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW);
        }
    }
}
