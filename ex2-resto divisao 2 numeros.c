#include <stdio.h>

int resto (int a, int b){
	int resto;
	resto = a % b;
	
	return (resto);
}
main(){
	
	int x, y;
		
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o primeiro numero: ");
	scanf("%d", &y);
	
	printf("\nO resto da divisao dos numeros eh: %d\n", resto(x, y));
	
	
	system ("pause");
}	
	

