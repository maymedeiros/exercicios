#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, op;
		
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num > 0){
		printf("VERDADEIRO\n\n");
	}else if (num < 0){
		printf("FALSO\n\n");
		
	}else{
		printf("VOCE PRECISA SELECIONAR UMA DAS OPCOES\n\n");
			
	}
	system("pause");
	return (0);
	
}
