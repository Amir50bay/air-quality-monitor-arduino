#include <ESP8266WiFi.h>

const char* ssid     = "dragonfly3";      // имя Wi-Fi
const char* password = "Rimaqwerty1!";    // пароль

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.println("Connecting to WiFi...");
  Serial.print("SSID: ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  // Ждём подключения (до ~15 секунд)
  int tries = 0;
  while (WiFi.status() != WL_CONNECTED && tries < 30) {
    delay(500);
    Serial.print(".");
    tries++;
  }
  Serial.println();

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("WiFi connected!");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("Failed to connect to WiFi");
  }
}

void loop() {
  delay(5000);

  wl_status_t st = WiFi.status();
  Serial.print("Status: ");
  Serial.print((int)st);      // 3 = WL_CONNECTED
  Serial.print("  IP: ");
  Serial.println(WiFi.localIP());
}