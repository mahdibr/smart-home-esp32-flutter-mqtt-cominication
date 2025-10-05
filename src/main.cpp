#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include "secrets.h"

const char* mqtt_server = MQTT_SERVER;
const uint16_t mqtt_port = MQTT_PORT;

WiFiClient espClient;
PubSubClient client(espClient);

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("📩 Message arrived [");
  Serial.print(topic);
  Serial.print("]: ");
  for (int i = 0; i < length; i++) Serial.print((char)payload[i]);
  Serial.println();
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Connecting to MQTT...");
    if (client.connect("ESP32Client", MQTT_USER, MQTT_PASSWORD)) {
      Serial.println("Connected!");
      client.subscribe("esp32/topic");
    } else {
      Serial.print("Failed, rc=");
      Serial.print(client.state());
      Serial.println(" retrying in 5s...");
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) delay(500);

  Serial.println("WiFi connected");

  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);
}

void loop() {
  if (!client.connected()) reconnect();
  client.loop();

  // ارسال پیام تست هر ۵ ثانیه
  static unsigned long lastMsg = 0;
  if (millis() - lastMsg > 5000) {
    lastMsg = millis();
    String message = "سلام از ESP32! زمان: " + String(millis()/1000) + "s";
    client.publish("flutter/topic", message.c_str());
    Serial.println("📤 Sent: " + message);
  }
}
