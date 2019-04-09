#include <stdio.h>
#include <stdlib.h>


int pos;
int neg;
int resultado;

int dobro(int num1, int num2){

	printf("\n=====1a MENSAGEM=====\n\n");
	printf("O dobro de %d eh %d\nE o dobro de %d eh %d\n",num1,num1*2,num2,num2*2);


}
int multiplicacao(int num1, int num2){

return num1*num2;

}

void verificar(int result){
	printf("\n=====3a MENSAGEM=====\n\n");
	if(result > 1){
		printf("O resultado do produto eh positivo\n\n");
	}else{
		printf("O resultado do produto eh negativo\n\n");
		
	}	
}

int main(){
	
	printf("Entre com dois numeros o primeiro positivo e o segundo negativo.\n\nPositivo: ");
	scanf("%d", &pos);

	if(pos <= 0){
		while(pos <= 0){
			printf("O primeiro numero eh positivo .\n\nPositivo: ");
		
			scanf("%d", &pos);	
		}
	}else{
		printf("\nAgora o negativo: ");
		scanf("%d", &neg);
		if(neg >=0){
			while(neg >= 0){
			printf("Este numero tem que ser negativo.\n\nNegativo: ");
			
			scanf("%d", &neg);	
			}
		}
	}

	dobro(pos,neg);
	
	printf("\n=====2a MENSAGEM=====\n\n");
	resultado = multiplicacao(pos,neg);
	printf("O produto entre os valores eh: %d\n",resultado);
	
	verificar(resultado);
	
	
system("pause");
}
