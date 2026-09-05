#include <ESP8266WiFi.h>
//#include <ESP8266WebServer.h>

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();

  WiFi.begin("ssid", "pass");

  Serial.print("Connecting... ");

  if (WiFi.status() != WL_CONNECTED) {
    delay(100);
  }

  Serial.print("Connected! IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {


}
