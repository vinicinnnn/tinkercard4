#include <Thermistor.h>

#define TEMP_MAX 40
#define TEMP_MIN 25

#define SIRENE_PIN 3

Thermistor temp(0);

void setup()
{
  Serial.begin(9600);
  Serial.println("Sistema de Alarme de Temperatura");
}

void loop()
{
  int temperatura = temp.getTemp();
  delay(2000);
  
  if (temperatura > TEMP_MIN && temperatura < TEMP_MAX)
  {
    noTone(SIRENE_PIN);
  }
  else
  {
    tone(SIRENE_PIN, 440, 1000);
    Serial.println("ALERTA: Temperatura fora do limite aceitável!");
    Serial.print("A temperatura deve estar entre ");
    Serial.print(TEMP_MIN);
    Serial.print(" e ");
    Serial.print(TEMP_MAX);
    Serial.println(" graus Celsius.");
  }
  
  Serial.print("Temperatura atual: ");
  Serial.print(temperatura);
  Serial.println(" °C");
}