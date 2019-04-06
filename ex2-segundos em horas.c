#include <stdio.h>

void main()
{
  	int seg, horas, horas_seg, minutos, segundos;
  	
  	horas_seg=3600;
	printf("Entre com o numero de segundos: ");
	scanf("%d", &seg);
	horas = (seg/horas_seg);
	minutos = (seg -(horas_seg*horas))/60;
	segundos = (seg -(horas_seg*horas)-(minutos*60));
	printf("%dh : %dm :%ds \n",horas,minutos,segundos);
 	
	system("pause");
}

