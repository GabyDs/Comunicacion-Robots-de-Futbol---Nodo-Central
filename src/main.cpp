#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "esp32wifi";
const char* password = "12345678";

void setup() {
  Serial.begin(115200);
  delay(1000);
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);
  Serial.println("AP iniciado. Esperando clientes...");
}

void loop() {
  int n = WiFi.softAPgetStationNum();
  Serial.print("Clientes conectados al WiFi: ");
  Serial.println(n);
  delay(1000);
}
