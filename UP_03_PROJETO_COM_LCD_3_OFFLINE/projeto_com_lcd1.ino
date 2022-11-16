#include<LiquidCrystal.h>

LiquidCrystal lcd(10, 9, 8, 5, 4, 3, 2);//	(RS, RW, E, D4, D5, D6, D7)

void setup()
{
  lcd.begin(16, 2); //INICIA O LCD 16X02 (COLUNAS,LINHAS)
  lcd.setCursor(5, 0); // COLOCA O CURSOR NAS CORDENADAS (5, 0)
  lcd.print("Projeto"); //ESCREVE NO LCD
  lcd.setCursor(7, 1); //COLOCA O CURSOR NAS CORDENADAS (7, 1)
  lcd.print("LCD"); //ESCREVE LCD
}

void loop()
{
  
}