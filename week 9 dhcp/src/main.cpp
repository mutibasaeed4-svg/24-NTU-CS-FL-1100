// Name: mutiba saeed
// Reg no: 24-NTU-CS-FL-1100
#include <Arduino.h>
#include <WiFi.h>

const char* ssid = "houdini ";
const char* password = "faisalabad";

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.print("Connecting to WiFi");

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // nothing here, connection is done once in setup()
}