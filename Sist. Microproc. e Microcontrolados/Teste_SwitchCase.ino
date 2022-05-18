int Counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() 
{
  // Print número contador
  //Serial.println(Counter);
  delay(1000);
  switch (Counter) {
case 1:
      Serial.println("O contador chegou ao número 1");
      Counter++;
      break;
case 10:
      Serial.println("O contador chegou ao número 10");
      Counter++;
      break;
case 15:
      Serial.println("O contador chegou ao número 15");
      Counter = 0;
      break;
default:
      Serial.println("O contador chegou ao número:");
      Serial.println(Counter);
      Counter++;
      break;
  }
}
