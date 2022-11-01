
#include "Energia.h"
#include "RSLK_MAX_Pins.h"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(500);
  pinMode(LP_RGB_LED_RED_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   
  digitalWrite(LP_RGB_LED_RED_PIN, HIGH);
  delay(1200);
  digitalWrite(LP_RGB_LED_RED_PIN, LOW);
  delay(1200);
  }
