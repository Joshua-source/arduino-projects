#include <ESP8266WiFi.h>
#include <ThingSpeak.h>
const char* ssid = "OnePlus 9R";
const char* pass = "josh1234";
int led = D2;
int val;
WiFiClient client;
unsigned long channelID = 1629283; //your TS channal
const char * APIKey = "4IOCOTS4Z3CUGDBW"; //your TS API
const char* server = "api.thingspeak.com";
const int postDelay = 20 * 1000; //post data every 20seconds
void setup() {
Serial.begin(115200);
pinMode(led, OUTPUT);
WiFi.begin(ssid, pass);
}
float data; //measured data
void loop() {
long rssi = WiFi.RSSI();
ThingSpeak.begin(client);
client.connect(server, 80); //connect(URL, Port)
if(rssi>=(-50) && rssi<=(-40)){
  digitalWrite(led,HIGH);
  val=1;
}
else{
  digitalWrite(led,LOW);
  val=0;
}
ThingSpeak.setField(1, rssi); 
ThingSpeak.setField(2, val);//set data on the X graph
ThingSpeak.writeFields(channelID, APIKey);//post everything to TS
client.stop();
delay(postDelay); //wait and then postagain
}


//void loop() {
//  rssi = WiFi.RSSI();
//  ThingSpeak.begin(client);
//  client.connect(server, 80);
//  ThingSpeak.setField(1, rssi);
//  ThingSpeak.writeFields(channelID, APIKey);
//  client.stop();
//  delay(postDelay);
//}
