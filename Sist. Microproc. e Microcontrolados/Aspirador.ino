/******************************************************************************************
FileName: Controle e sensor
Dependencies: Veja a seção de includes
Processor: ESP32
Compiler: Framework Arduino
Company: FATEC Santo André
Authors: Geovanni Dias, Lucas D'Elia, Otávio Gouveia e Rafael Mendes
Date: 19/04/2022
Software License Agreement: Somente para fins didáticos
*******************************************************************************************
File Description: Programa para utilizar o sensor de ultrassom HC-SR04 e controlar o motor.
Trata-se de um comando simples, em que detecte o obstáculo a certa distancia, pare, dê ré e
vire a direita até certo ponto, assim continuando o movimento em linha reta.
Change History:
1.0   19/04/2022  Versão inicial
2.0   24/04/2022  Versão atualizada - Ajustes
********************************************************************************************/

//Includes do Compilador

#include <Arduino.h>

//==========================================================================================
//Apelidos das variáveis e pinos
//==========================================================================================
#define trigger1     19
#define ecoRetorno1  18
#define trigger2     23
#define ecoRetorno2  22
#define vel_som     0.034
#define IN1 5
#define IN2 0
#define IN3 13
#define IN4 14

//==========================================================================================
// Define variáveis e constantes
//==========================================================================================

unsigned long duracao1;
float distancia1;
unsigned long duracao2;
float distancia2;

//==========================================================================================
// Área de setups durante a inicialização do programa
// Obrigatório no Framework do Arduino
//==========================================================================================

/******************************************************************************************
 - TABELA DE COMANDOS -
 
MOVIMENTO	    IN1	IN2	IN3	IN4
Para frente	   1	 0	 0	 1
Para trás	     0	 1	 1	 0
Direita	       1	 0	 0	 0
Esquerda	     0	 0	 0	 1
Pare	         0	 0	 0	 0
********************************************************************************************/

//==========================================================================================
void setup()
  {
    pinMode(trigger1, OUTPUT);
    pinMode(ecoRetorno1, INPUT);
    pinMode(trigger2, OUTPUT);
    pinMode(ecoRetorno2, INPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    Serial.begin(9600);
  }

//==========================================================================================
// Área do loop infinito. Obrigatório no Framework do Arduino
//==========================================================================================

void loop()
  {
    digitalWrite(trigger1, HIGH); //pulso do sensor ultrassônico
    delayMicroseconds(10);
    digitalWrite(trigger1, LOW);
    
    duracao1 = pulseIn(ecoRetorno1, HIGH); //Tempo do pulso do ecoRetorno
    distancia1 = (duracao1 * vel_som)/2; // Cálculo distancia
    Serial.print("Distancia1 em (): "); 
    Serial.println(distancia1); // Valor da distancia (cm)
    Serial.println(duracao1); // Tempo de duração (s)

    digitalWrite(trigger2, HIGH); //pulso do sensor ultrassônico
    delayMicroseconds(10);
    digitalWrite(trigger2, LOW);
    
    duracao2 = pulseIn(ecoRetorno2, HIGH); //Tempo do pulso do ecoRetorno
    distancia2 = (duracao2 * vel_som)/2; // Cálculo distancia
    Serial.print("Distancia2 em (): "); 
    Serial.println(distancia2); // Valor da distancia (cm)
    Serial.println(duracao2); // Tempo de duração (s)

    delay(100);

    if (distancia1 <= 10) { // Caso a distancia for menor ou igual a dez
      digitalWrite(IN1, LOW); //Desliga todas saídas = parada
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW); 
      digitalWrite(IN4, LOW);
      delayMicroseconds(10);
      digitalWrite(IN2, HIGH); // Liga as saídas para dar ré
      digitalWrite(IN3, HIGH);
      delay(1000);
      digitalWrite(IN2, LOW); // Desliga as saídas da ré
      digitalWrite(IN3, LOW);
      digitalWrite(IN1, HIGH); // Liga a saída IN2 para fazer curva a direita
      delay(850);
      digitalWrite(IN4, HIGH); // Liga a saída IN4 para andar em linha reta após ter virado
    }

    if (distancia2 <= 10) { // Caso a distancia for menor ou igual a dez
      digitalWrite(IN1, LOW); //Desliga todas saídas = parada
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW); 
      digitalWrite(IN4, LOW);
      delayMicroseconds(10);
      digitalWrite(IN2, HIGH); // Liga as saídas para dar ré
      digitalWrite(IN3, HIGH);
      delay(1000);
      digitalWrite(IN2, LOW); // Desliga as saídas da ré
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH); // Liga a saída IN4 para fazer curva a esquerda
      delay(850);
      digitalWrite(IN1, HIGH); // Liga a saída IN2 para andar em linha reta após ter virado
    }

    else if (distancia1 > 10){ // Caso a distancia for maior que 10cm, ande em frente
       digitalWrite(IN1, HIGH); // Liga as saídas para acelerar 
       digitalWrite(IN4, HIGH); 
    }  
    else if (distancia2 > 10){ // Caso a distancia for maior que 10cm, ande em frente
       digitalWrite(IN1, HIGH); // Liga as saídas para acelerar 
       digitalWrite(IN4, HIGH);   
    }

    


  }
