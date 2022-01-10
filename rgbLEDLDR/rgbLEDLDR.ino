

int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;

int red;
int green;
int blue;

void setup() {
    Serial.begin(115200);
    // pinMode(A0, INPUT);
    pinMode(red_light_pin, OUTPUT);
    pinMode(green_light_pin, OUTPUT);
    pinMode(blue_light_pin, OUTPUT);
}

void loop() {
    int value = analogRead(A0);
    Serial.println("Analog value : ");
    Serial.println(value);
    delay(250);
    if (value < 10) {  
        red = 255;
        green = 0;
        blue = 0;
    }

    if ((value > 11 ) && (value < 40)) { 
        red =0;
        green = 0;
        blue = 255;
    }

    if ((value > 42) && (value < 60)) { 
        red = 0;
        green = 255;
        blue = 0;
    }
    
    RGB_color(red, green, blue);


}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value){
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
