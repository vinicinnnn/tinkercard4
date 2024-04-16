#include <Thermistor.h>

Thermistor tempSensor(0); 
void setup() {
  Serial.begin(9600);
}

void loop() {
  int temp = tempSensor.getTemp(); 
  Serial.print("Temperatura medida: ");
  Serial.print(temp); 
  Serial.println(" °C"); 
  delay(1000);
}