int contador = 0;
int botao = 0;

void setup() {
  pinMode(14, INPUT);
  Serial.begin(115200);
}

void loop() {
    while(digitalRead (14) == 0){
    contador = contador + 1;
    Serial.print(contador);
    Serial.println();
    delay(100);
  }
}
