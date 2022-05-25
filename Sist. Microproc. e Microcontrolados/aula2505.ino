void pisca(unsigned int led, unsigned int tempo)
{
  digitalWrite(led, HIGH);
  delay(tempo);
  digitalWrite(led, LOW);
  delay(tempo);

}

void piscasimul(unsigned int led1, unsigned int led2)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(500);
}

void piscatudo(unsigned int led1, unsigned int led2, unsigned int led3)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

int chave = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);

  pinMode(23, INPUT);
}

void loop()
{


  // put your main code here, to run repeately:
  delay(10); // this speeds up the simulation

 
  switch (chave)
  {
    case 0:
    pisca(12, 250);
    if(digitalRead(23) ==0)
     {chave = 1;}
    else
     {chave = 0;}
    break;

    case 1:
    piscasimul(13,14);
    if(digitalRead(23) ==1)
     {chave = 0;}
    else
     {chave = 1;}
    break;
    
    case 2:
    piscatudo(12,13,14);
    if
    
    break;
  }
  
