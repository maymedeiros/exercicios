#include <stdio.h>

int main(int argc, char** argv)
{
   int seg, horas, horas_seg, minutos, segundos;
   horas_seg=3600;//horas em segundos
   printf("Entre com o número de segundos: ");
   scanf("%d", &seg);
   horas = (seg/horas_seg); //resultado da hora
   minutos = (seg -(horas_seg*horas))/60;
   segundos = (seg -(horas_seg*horas)-(minutos*60));
   printf("%dh : %dm :%ds \n",horas,minutos,segundos);
   
   return 0;
}
