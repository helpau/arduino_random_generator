#include <Arduino.h>
int thisByte;  
int av=0;  
void setup() {   
  Serial.begin(9600);   
  Serial.println("Echo");   
}   
  
// этот цикл, запустившись, будет повторятся снова и снова:
void loop() {
  // считываем входную информацию на 0-ом аналоговом контакте:
  int sensorValue = analogRead(A0);
  // конвертируем информацию, считанную на 0-ом аналоговом контакте (цифры в диапазоне от 0 до 1023), в напряжение (цифры в диапазоне от 0.0 до 5.0 вольт):
  // отображаем считанные и преобразованные данные:
  Serial.println(sensorValue, BIN);
}