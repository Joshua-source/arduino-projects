int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;

int arr[3] = {0,0,0};

void setup() {
  Serial.begin(115200);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}
void loop() {
 while (Serial.available() > 0) {
        arr[0] = Serial.parseInt();
        arr[1] = Serial.parseInt();
        arr[2] = Serial.parseInt();
        RGB_color(arr[0],arr[1],arr[2]); // Red
  }
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
