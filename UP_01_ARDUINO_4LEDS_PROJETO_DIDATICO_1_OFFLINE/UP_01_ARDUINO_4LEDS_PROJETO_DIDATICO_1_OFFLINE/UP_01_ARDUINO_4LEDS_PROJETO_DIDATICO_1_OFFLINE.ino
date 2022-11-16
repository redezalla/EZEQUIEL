// PROFESSO RAFAEL SEPULVEDA ZALLA
// MODELO 0001
// UP_01_ARDUINO_4LEDS_PROJETO_DIDATICO_1_OFFLINE
// PROJETO COM SINCRONIZAÇÃO DE LEDS
// PROJETO COM SINCRONIZAÇÃO DE LEDS AVALIAÇÃO 1
// Declaração dos LEDs
int led1=2;
int led2=3;
int led3=4;
int led4=5;

int i; //Contador para FOR
int tempo=400;//Tempo em milessegundos

void setup(){
// Configuração dos 4 pinos digitsid como saida
  for(i=led1;i<=led4;i++){
    pinMode(i,OUTPUT);
  }
}

    void loop(){      
  //Acende os LEDs da esquerda para a direita
  for(i=led1;i<=led4;i++)
  {
    digitalWrite(i,HIGH); //Acende o LED
    delay(tempo); //Atraso
}
      
  //Desliga os LEDs da direita para a esquerda
  for(i=led4;i>=led1;i--)
  {
    digitalWrite(i,LOW); //Desliga o LED
  delay(tempo); //Atraso  
  }
}

/* Sketch uses 1078 bytes (3%) of program storage space. Maximum is 32256 bytes.
Global variables use 11 bytes (0%) of dynamic memory, leaving 2037 bytes for local variables. Maximum is 2048 bytes.

--------------------------
Compilation complete. */

