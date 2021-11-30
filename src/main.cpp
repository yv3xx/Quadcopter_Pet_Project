#include <Arduino.h>
#include <SPI.h> 

uint8_t led_pin=6;
uint8_t led_status=0;
void setup() {
  // put your setup code here, to run once:
   pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
  // put your main code here, to run repeatedly:
}