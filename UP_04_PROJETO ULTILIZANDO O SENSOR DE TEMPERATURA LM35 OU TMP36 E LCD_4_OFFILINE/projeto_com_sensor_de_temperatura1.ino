//PROJETO ULTILIZANDO O SENSOR DE TEMPERATURA LM35 OU TMP36 E LCD

//DECLARAÇÃO DE VARIÁVEIS 
const int LM35=A0;
const int TMP36=A0;

//VARIAVEIS QUE ARMAZENARA A TEMPERATURA MEDIA
float temperatura_lm35;
float temperatura_tmp36;

//BIBLIOTECAS
#include <LiquidCrystal.h>

/*CONFIGURANDO AS PORTAS DIGITAIS DO ARDUINO
QUE IRÃO SE CONECTAR AO LCD */
//(RS, RW, E, D4, D5, D6, D7)
LiquidCrystal lcd(10, 9, 8, 5, 4, 3, 2);

void setup(){

  lcd.begin(16, 2);
  lcd.setCursor(2, 0);
  lcd.print("TEMPERATURA");
  
}

void loop(){

  //CALCULANDO A TEMPERATURA PARA DOIS SENSORES
  
  temperatura_lm35=(float(analogRead(LM35))*5/1023)/0.01;
  temperatura_tmp36=(float(analogRead(TMP36))*5/1023-0.5)/0.01;
  
  lcd.setCursor(5, 1);
  lcd.print(temperatura_tmp36);//ESCREVA NO LCD
  lcd.print(" C ");
  delay(1000);
}