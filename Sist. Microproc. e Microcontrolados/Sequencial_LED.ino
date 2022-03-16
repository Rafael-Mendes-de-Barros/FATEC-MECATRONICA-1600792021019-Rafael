int botao = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello World!");
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(5, INPUT);
  int botao = 0;

}

void loop() {
  // put your main code here, to run repeatedly:
  botao = digitalRead(5);
  if (botao == 0)
    {
    digitalWrite(32, HIGH);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, HIGH);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, HIGH);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, HIGH);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, HIGH);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, HIGH);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, HIGH);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, HIGH);
    delay(200);
    }

  else
  {
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, HIGH);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, HIGH);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, HIGH);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, HIGH);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, HIGH);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(25, HIGH);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, LOW);
    digitalWrite(33, HIGH);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
    digitalWrite(32, HIGH);
    digitalWrite(33, LOW);
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
    digitalWrite(23, LOW);
    digitalWrite(22, LOW);
    digitalWrite(21, LOW);
    digitalWrite(19, LOW);
    delay(200);
  }

    



  
}
