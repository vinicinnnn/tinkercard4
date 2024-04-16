#define pot A0 

int potvalor; 

void setup() {
  Serial.begin(9600); 
}

void loop() {

  potvalor = analogRead(pot); 
  
  Serial.print("Valor do Potenciometro = "); 
  Serial.println(potvalor); 
  
  delay(250); 
}