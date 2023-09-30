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
      delay(300);
      digitalWrite(Par, HIGH);
      delay(300);
      digitalWrite(Par, LOW);
      delay(300);
      digitalWrite(Par, HIGH);
      Counter++;
      break;

case 3:
      digitalWrite(Par, LOW);
      delay(1000);
      digitalWrite(Par, HIGH);
      Counter++;
      break;

case 4:
      digitalWrite(Impar, LOW);
      delay(300);
      digitalWrite(Impar, HIGH);
      delay(300);
      digitalWrite(Impar, LOW);
      delay(300);
      digitalWrite(Impar, HIGH);
      Counter++;
      break;

case 5:
      digitalWrite(Impar, LOW);
      delay(300);
      digitalWrite(Impar, HIGH);
      delay(300);
      digitalWrite(Impar, LOW);
      delay(300);
      digitalWrite(Impar, HIGH);
      Counter++;
      break;

case 6:
      digitalWrite(Impar, LOW);
      delay(1000);
      digitalWrite(Impar, HIGH);
      Counter++;
      break;

case 7:
      digitalWrite(Impar, LOW);
      delay(1000);
      digitalWrite(Impar, HIGH);
      Counter++;
      break;

default:
      Counter++;
      break;
  }
}
