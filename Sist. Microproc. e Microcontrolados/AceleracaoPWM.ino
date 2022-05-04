#include <Arduino.h>

//Controle do PWM
//Define o pino que será usado como PWM
const int PWM0 = 23;
const int PWM1 = 22;

//Ajuste os parâmetros do PWM
const int freqPWM = 2000;
const int canalPWM0 = 0;
const int canalPWM1 = 1;
const int resolucao = 10;

#define IN1 5
#define IN2 0
#define IN3 13
#define IN4 14



void setup() 
{
  ledcSetup(canalPWM0, freqPWM, resolucao);
  ledcSetup(canalPWM1, freqPWM, resolucao);  

  ledcAttachPin(5, canalPWM0);
  ledcAttachPin(14, canalPWM0);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);
  

}

void loop() { 
 for(int rpm = 0; rpm <= 1023; rpm = rpm + 10)
 {
   ledcWrite(canalPWM0, rpm);
   delay(100);
 }
}
