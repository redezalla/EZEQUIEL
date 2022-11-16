#include <stdio.h>
#include <time.h> //necess�rio para usar localtime() e struct tm
int main(void)
{
  //ponteiro para struct que armazena data e hora  
  struct tm *data_hora_atual;     
  
  //vari�vel do tipo time_t para armazenar o tempo em segundos  
  time_t segundos;
  
  //obtendo o tempo em segundos  
  time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a fun��o localtime  
  data_hora_atual = localtime(&segundos);  
  
  //para acessar os membros de uma struct usando o ponteiro
  //utilizamos o operador -> no nosso caso temos: 
  //data_hora_atual->membro_da_struct
  
  //Acessando dados convertidos para a struct data_hora_atual  
  printf("\nDia..........: %d\n", data_hora_atual->tm_mday);  
  
  //para retornar o m�s corretamente devemos adicionar +1 
  //como vemos abaixo
  printf("\nMes..........: %d\n", data_hora_atual->tm_mon+1);
  
  //para retornar o ano corretamente devemos adicionar 1900 
  //como vemos abaixo
  printf("\nAno..........: %d\n\n", data_hora_atual->tm_year+1900);  
  
  printf("\nDia do ano...: %d\n", data_hora_atual->tm_yday);  
  printf("\nDia da semana: %d\n\n", data_hora_atual->tm_wday);
    
  /* Obtendo os valores da struct data_hora_atual  
    e formatando a sa�da de dados no formato 
    hora: minuto: segundo
     
  Para n�o ficar um printf muito longo em uma �nica linha
  de comando, quebrei a impress�o em 3 partes mostrando
  uma informa��o em cada linha 
  */  
  printf("\nHora ........: %d:",data_hora_atual->tm_hour);//hora   
  printf("%d:",data_hora_atual->tm_min);//minuto
  printf("%d\n",data_hora_atual->tm_sec);//segundo  
  
  /* Obtendo os valores da struct data_hora_atual  
     e formatando a sa�da de dados no formato dia/mes/ano 
     
     Para n�o ficar um printf muito longo em uma �nica 
     linha de comando, quebrei a impress�o em 3 partes
     sendo uma informa��o em cada linha   
  */  
  //dia do m�s
  printf("\nData ........: %d/", data_hora_atual->tm_mday);
  printf("%d/",data_hora_atual->tm_mon+1); //m�s
  printf("%d\n\n",data_hora_atual->tm_year+1900); //ano
  
  return 0;
}
