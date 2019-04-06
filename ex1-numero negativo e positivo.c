#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, op;
		
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num > 0){
		printf("VERDADEIRO\n");
	}else if (num < 0){
		printf("FALSO\n");
		
	}else{
		printf("VOCE PRECISA SELECIONAR UMA DAS OPCOES\n\n");
		printf("Para VERDADEIRO escolha 1\nPara FALSO escolha 2\n");
		scanf("%d", &op);
		
		switch(op){
			case 1: printf("\nVERDADEIRO\n");
				break;
			case 2: printf("\nFALSO\n");
				break;
		}	
	}
	system("pause");
	return (0);
	
}
