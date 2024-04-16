#define CHAVE 2 

void setup() {
  pinMode(CHAVE, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(CHAVE) == HIGH) { 
    Serial.println("Botao Pressionado"); 
  } else { 
    Serial.println("Botao Despressionado"); 
  }

  delay(250); 
}