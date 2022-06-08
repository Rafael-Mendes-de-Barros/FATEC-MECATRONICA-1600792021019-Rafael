/******************************************************************************************
FileName: Controle e sensor//
Dependencies: Veja a seção de includes
Processor: ESP32
Compiler: Framework Arduino
Company: FATEC Santo André
Authors: Geovanni Dias, Lucas D'Elia, Otávio Gouveia e Rafael Mendes
Date: 19/04/2022
Software License Agreement: Somente para fins didáticos
*******************************************************************************************
File Description: Programa para utilizar o sensor de ultrassom HC-SR04 e controlar o motor
Change History:
1.0   19/04/2022  Versão inicial
********************************************************************************************/
#include <Arduino.h>

#define trigger     5
#define ecoRetorno  18
#define vel_som     0.034
#define L1          13
#define L2          12
#define L3          14

int parametro = 0;
unsigned long duracao;
float distancia;


void pisca_extremidades(unsigned int led1, unsigned int led3)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led3, HIGH);
  delay(200);
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  delay(200);
}

void pisca_tres(unsigned int led1, unsigned int led2, unsigned int led3, unsigned int tempo)
{
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(tempo);
}


void setup()
  {
    pinMode(trigger, OUTPUT);
    pinMode(ecoRetorno, INPUT);
    pinMode(L1, OUTPUT);
    pinMode(L2, OUTPUT);
    pinMode(L3, OUTPUT);
    Serial.begin(9600);
  }


void loop(){
    digitalWrite(trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger, LOW);

    duracao = pulseIn(ecoRetorno, HIGH);
    distancia = (duracao * vel_som)/2;
    Serial.print("Distancia em (): ");
    Serial.println(distancia);
    Serial.println(duracao);
    delay(100);


  if(distancia < 100)
    {parametro = 1;}

  if(distancia >= 100 and distancia < 398)
    {parametro = 2;}


  if(distancia > 398)
    {parametro = 3;}
 

    
  switch(parametro)
  {
    case 1:
    pisca_tres(L1, L2, L3, 200);
    break;

    case 2:
    pisca_extremidades(L1, L3);
    break;

    case 3:
    pisca_tres(L1, L2, L3, 500);
    break;

  }
}
  
