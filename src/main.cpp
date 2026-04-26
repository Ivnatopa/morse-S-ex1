#include <Arduino.h>

#define LED_PIN 2 // Вграденият светодиод на ESP32 DevKit V1

void setup() {
  // Конфигуриране на пина като изход
  pinMode(LED_PIN, OUTPUT);
  
  // Инициализация на серийния монитор според platformio.ini
  Serial.begin(115200);
  
  // Кратко закъснение за стабилизиране на порта
  delay(1000); 
  Serial.println("System Started");
}

void loop() {
  // Цикъл за 3 кратки премигвания (Морзово 'S')
  for(int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH); // Включване на LED
    delay(200);                  // Кратко задържане (200ms)
    digitalWrite(LED_PIN, LOW);  // Изключване на LED
    delay(200);                  // Кратка пауза (200ms)
  }
  
  // Дълга пауза преди повторение на символа
  delay(1500); 
}