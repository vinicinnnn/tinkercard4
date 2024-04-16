#define botaoA 6
#define botaoB 7
#define ledXOR 8
#define ledOU 9
#define ledE 10 

boolean estadoA = 0;
boolean estadoB = 0;

void setup() {

  pinMode(ledXOR, OUTPUT);
  pinMode(ledOU, OUTPUT);
  pinMode(ledE, OUTPUT);

  pinMode(botaoA, INPUT);
  pinMode(botaoB, INPUT);
}

void loop() {

  estadoA = digitalRead(botaoA);
  estadoB = digitalRead(botaoB);

  digitalWrite(ledXOR, estadoA ^ estadoB);
  
  digitalWrite(ledOU, estadoA || estadoB);
  
  digitalWrite(ledE, estadoA && estadoB);
  
  delay(100);
}