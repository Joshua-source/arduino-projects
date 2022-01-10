int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;
int potentiometer = A0;
int red;
int green;
int blue;

void setup() {
    Serial.begin(115200);
    // pinMode(A0, INPUT);
    pinMode(red_light_pin, OUTPUT);
    pinMode(green_light_pin, OUTPUT);
    pinMode(blue_light_pin, OUTPUT);
    pinMode(potentiometer, INPUT);
}

void loop() {
    int value = map(analogRead(potentiometer), 0, 1023, 0, 255);
    Serial.println(value);
    if (value < 36.4) {  //143, 0, 255
        red = 143;
        green = 0;
        blue = 255;
    }

    if ((value > 36.4 ) && (value < 73)) { //  75, 0, 130
        red =75;
        green = 0;
        blue = 130;
    }

    if ((value > 74) && (value < 109)) { // 0,0,255
        red = 0;
        green = 0;
        blue = 255;
    }
    if ((value > 110) && (value < 146)) { //0,255,0
        red = 0;
        green = 255;
        blue = 0;
    }
    if ((value > 147) && (value < 182)) { //255, 255, 0
        red = 255;
        green = 255;
        blue = 0;
    }
    if ((value > 183) && (value < 219)) {// (255,160,122)
        red = 255;
        green = 160;
        blue = 122;
    }
    if ((value > 220) && (value <= 255)) {// (255,160,122)
        red = 255;
        green = 0;
        blue = 0;
    }
    
    RGB_color(red, green, blue);


}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value){
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}



 

   

 
