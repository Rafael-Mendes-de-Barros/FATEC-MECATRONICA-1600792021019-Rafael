#define GPIO_BOTAO 23
#define TEMPO_DEBOUNCE 20 //MS

int contador_acionamentos = 0;
unsigned long timestamp_ultimo_acionamento = 0;

/*Função ISR (chamada quando há geração de interrupção) */
void IRAM_ATTR funcao_ISR()
{
if ( (millis() - timestamp_ultimo_acionamento) >= TEMPO_DEBOUNCE )
{
contador_acionamentos++;
timestamp_ultimo_acionamento = millis();
}
}

void setup()
{
  Serial.begin(115200);

  pinMode(GPIO_BOTAO, INPUT);
  attachInterrupt(GPIO_BOTAO, funcao_ISR, RISING);
}

void loop()
{
Serial.println(contador_acionamentos);
}
