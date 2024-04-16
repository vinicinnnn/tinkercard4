#define LDR A0 
#define LED 8 

float luminosidade;
float amostra;

void setup()
{
  Serial.begin(9600); 
  pinMode(LED, OUTPUT); 
  digitalWrite(LED, LOW); 
}

void loop()
{
  amostra = 0; 
  
  for(int i = 0; i < 100; i++)
  {
    luminosidade = analogRead(LDR); 
    luminosidade = (luminosidade / 1024) * 100; 
    amostra = amostra + luminosidade; 
  }
  
  amostra = amostra / 100; 
  Serial.print("Luminosidade = "); 
  Serial.print(amostra, 0); 
  Serial.println("%");
  
  if(amostra < 30) 
  {
    digitalWrite(LED, HIGH); 
  }
  else 
  {
    digitalWrite(LED, LOW); 
  }
  
  delay(250);
}