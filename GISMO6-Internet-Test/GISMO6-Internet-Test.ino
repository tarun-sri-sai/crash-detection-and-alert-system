#include <WiFi.h>

void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(115200);
  WiFiInit();
}

void loop()
{
}

void WiFiInit()
{
  // Connecting to Wi-Fi network
  WiFi.begin(getenv("MY_HOTSPOT_NAME"), getenv("MY_HOTSPOT_PASSWORD"));
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    digitalWrite(2, !digitalRead(2));
    delay(1000);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();
}
