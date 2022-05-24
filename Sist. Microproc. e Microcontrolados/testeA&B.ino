int vetor[] = {12, 3, 9, 32, -1, 5, 44, 56, 60, 49, 16, 28, 5, 0, -2, 38, -4,};
int n = sizeof(vetor)/sizeof(int);

void setup() {
  Serial.begin(115200);

  Serial.println(""); 
  Serial.print("Menor valor="); 
  Serial.print(menor(vetor));
  Serial.println("");  
  Serial.print("Maior valor="); 
  Serial.print(maior(vetor));
  Serial.println(""); 
}
  
void loop() {
 
}

int menor(int *B){
  long cont = 0;
  int x;
  int y = B[0];
    for(int j = 0; j <= n-1; j++){
      x = min(y, B[j]);
      y = x;
    }
    return y;
}

int maior(int *B){
  long cont = 0;
  int x;
  int y = B[0];
    for(int j = 0; j <= n-1; j++){
      x = max(y, B[j]);
      y = x;
    }
    return y;
}
