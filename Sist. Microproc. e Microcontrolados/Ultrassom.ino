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

//Includes do Compilador

#include <Arduino.h>

//==========================================================================================
//Apelidos das variáveis e pinos
//==========================================================================================
#define trigger     5
#define ecoRetorno  18
#define vel_som     0.034

//==========================================================================================
// Define variáveis e constantes
//==========================================================================================

unsigned long duracao;
float distancia;

//==========================================================================================
// Área de setups durante a inicialização do programa
// Obrigatório no Framework do Arduino
//==========================================================================================
void setup()
  {
    pinMode(trigger, OUTPUT);
    pinMode(ecoRetorno, INPUT);
    Serial.begin(9600);
  }

//==========================================================================================
// Área do loop infinito. Obrigatório no Framework do Arduino
//==========================================================================================

void loop()
  {
    digitalWrite(trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger, LOW);

    duracao = pulseIn(ecoRetorno, HIGH);
    distancia = (duracao * vel_som)/2;
    Serial.print("Distancia em (): ");
    Serial.println(distancia);
    Serial.println(duracao);
    delay(100);
  }

