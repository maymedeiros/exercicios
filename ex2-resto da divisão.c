#include <stdio.h>

int main()
{
int n1, n2, rest;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	if(n2 > 0){
		rest = n1 % n2;
		printf("O resto da divisao dos numeros eh: %d\n", rest); 
		
	}else{
		printf("Impossivel fazer a divisao, denominador nao pode ser nulo!!\n");
	}
	
	system("pause");
	return (rest);
	
}

