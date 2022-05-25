void pisca(unsigned int led, unsigned int tempo)
{
  digitalWrite(led, HIGH);
  delay(tempo);
  digitalWrite(led, LOW);
  delay(tempo);

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
    { chave = 2;}
    else
     {chave = 0;}
    break;
    case 1:
    pisca(13, 500);
    chave = 0;
    break;
    case 2:
    pisca(14, 1000);
    chave = 1;
    break;
  }
  






}
