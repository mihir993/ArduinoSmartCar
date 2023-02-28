#include "config.h"
#include "wifi.h"

const char* ssid = WIFISSID;
const char* pwd = WIFIPWD;

void setup() {
  // put your setup code here, to run once:
  connect_to_wifi(ssid, pwd);
}

void loop() {
  // put your main code here, to run repeatedly:
}
