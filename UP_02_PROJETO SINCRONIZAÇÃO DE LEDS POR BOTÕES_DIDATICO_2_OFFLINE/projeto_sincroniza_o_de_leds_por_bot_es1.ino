//Prof Rafael Sepulveda Zalla
//DECLARAÇÃO DE VARIÁVEIS 
int led1=2;
int led2=3;
int led3=4;
int led4=5;

int bot_esq=6; //BOTÃO ESQUERDO
int bot_dir=7; //BOTÃO DIREITO

int i; //CONTADOR PARA FOR
int tempo=1000; //TEMPO EM MILISSEGUNDOS
int valor=1; //ARMAZENA O DADO DO BOTÃO

void setup(){
//CONFIGURAÇÃO DOS 4 PINOS DIGITAIS COMO SAÍDA 
  
  for(i=led1;i<=led4;i++){
  pinMode(i,OUTPUT);
  }
 // CONFIGURAÇÃO DOS PINOS 6 E 7 COMO ENTRADAS
  pinMode(bot_esq,INPUT);
  pinMode(bot_dir,INPUT);
}

void loop(){
//SE O "valor" FOR ZERO GIRE PARA A DIREITA
  if(valor==0){
  //ACENDE OS LEDES DA ESQUERDA A DIREITA
    for(i=led1;i<=led4+3;i++){
    
      if(i<=led4){
        digitalWrite(i,HIGH); //ACENDE O LED
    }
      
      if(i>led3){
        digitalWrite(i-3,LOW); //DESLIGA O LED
      }
      delay(tempo); //ATRASO
      
      // FAZENDO ALEITURA DOS DOIS BOTOES
      if(digitalRead(bot_esq)==1){
      valor=1;
        i=led4+4; //MUDA O VALOR E SAIDA DE FOR
      }
      if(digitalRead(bot_dir)==1){
      valor=0;
        i=led4+4; // MUDA O VALOR E SAIDA DO FOR
      }      
  }
}
 
// SE "valor" FOR ZERO GIRE PARA ESQUERDA
  if(valor==1){
  //ACENDE OS LEDS DA DIREITA PARA ESQUERDA
    for(i=led4;i>=led1-3;i--){
    
      if(i>=led1){
      digitalWrite(i,HIGH); //ACENDE O LED
      }
      
      if(i<led2){
      digitalWrite(i+3,LOW); //DESLIGA O LED
      }
      delay(tempo); //DESLIGA O LED
      
      // FAZENDO A LEITURA DOS DOIS BOTOES
      if(digitalRead(bot_esq)==1){
      valor=1;
        i=led1-4; //MUDA O VALOR E SAI DO FOR
      }
      if(digitalRead(bot_dir)==1){
      valor=0;
        i=led1-4; //MUDA O VALOR E SAI DO FOR
      }
    }
  }
}  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  