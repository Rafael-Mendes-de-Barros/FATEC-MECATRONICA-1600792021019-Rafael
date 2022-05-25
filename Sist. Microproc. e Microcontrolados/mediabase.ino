// Função para calcular a média 

float calcula_media( int a, int b)
{
  int c = 0;
  c = (a+b)/2;
  return c;
}

// Variáveis Globais

float media = 0;
float media1 = 0;
float media2 = 0;
float media3 = 0;
float media4 = 0;
float media5 = 0;

// Configurações do ESP32

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  delay(5000);
  media = (calcula_media(10,2));
  media1 = (calcula_media(5,4));
  media2 = (calcula_media(7,15));
  media3 = (calcula_media(10,23));
  media4 = (calcula_media(10,20));
  media5 = (calcula_media(30,15));
  Serial.println(media);
  Serial.println(media1);
  Serial.println(media2);
  Serial.println(media3);
  Serial.println(media4);
  Serial.println(media5);
  Serial.println("");
