int Counter = 0;
int par_impar = 0;
int divisorpor3 = 0;
int divisorpor5 = 0;
int Teste = 0;
#define Par 18
#define Impar 26

void setup() {
  pinMode(Par, OUTPUT);
  pinMode(Impar, OUTPUT);
  Serial.begin(115200);
}

void loop() 
{
par_impar = Counter % 2;
divisorpor3 = Counter % 3;
divisorpor5 = Counter % 5;

Teste = par_impar*4 + divisorpor3*2 + divisorpor5*1;
  // Print número contador
  Serial.println(Counter);
  delay(1000);
  switch (Teste) {
case 2:
      digitalWrite(Par, LOW);
      delay(50);
      digitalWrite(Par, HIGH);
      delay(50);
      digitalWrite(Par, LOW);
      Counter++;
      break;

case 1:
      digitalWrite(Impar, LOW);
      Counter++;
      break;

case 2:
      if ()
      digitalWrite();
default:
      Counter++;
      break;
  }
}
