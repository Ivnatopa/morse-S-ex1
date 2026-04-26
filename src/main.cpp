#include <Arduino.h>

#define LED_PIN 2 

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  
  
  Serial.begin(115200);
  
  
  delay(1000); 
  Serial.println("System Started");
}

void loop() {
  
  for(int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH); 
    delay(200);                  
    digitalWrite(LED_PIN, LOW);  
    delay(200);            
  }
  
  
  delay(1500); 
}