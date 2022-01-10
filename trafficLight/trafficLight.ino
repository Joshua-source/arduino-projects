
// variables
int GREEN = 10;
int YELLOW = 11;
int RED = 12;
int DELAY_GREEN = 2000;
int DELAY_YELLOW = 2000;
int DELAY_RED = 2000;


// basic functions
void setup()
{
  Serial.begin(115200);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop()
{ Serial.println("Go!");
  green_light();
  delay(DELAY_GREEN);
  Serial.println("Slow down");
  yellow_light();
  delay(DELAY_YELLOW);
  Serial.println("Stop!");
  red_light();
  delay(DELAY_RED);
}

void green_light()
{
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}

void yellow_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
}

void red_light()
{
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
}
