#include <Arduino.h>
#include <WiFi.h>

// put function declarations here:

#define LED 33

const char* ssid = "esp32wifi";
const char* password = "12345678";

void setup() {
  // put your setup code here, to run once:
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here: