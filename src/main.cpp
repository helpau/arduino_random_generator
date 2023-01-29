#include <Arduino.h>
uint64_t bits_counter=0;
void print1bit(int var) {
    Serial.print(var % 2);
}

void setup() {   
  Serial.begin(9600);    
}   
  
void loop() {
  uint8_t sensorValue = analogRead(A0)+
                        analogRead(A1)+
                        analogRead(A2)+
                        analogRead(A3);
  uint8_t value=sensorValue;
  //https://mzsoltmolnar.github.io/random-bitstream-tester/
  //in samples 10^6 bits
  if(bits_counter<1000000){
    print1bit(value);
    bits_counter+=1;
  }
}