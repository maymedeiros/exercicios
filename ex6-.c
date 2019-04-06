#include <stdio.h>


int dobro(int a, int b) {
	
	printf("O dobro desses numeros sao: %d e %d\n", a*2, b*2);
	return 0;
}
int quadrado(int a, int b) {
	
	printf("O quadrado desses numeros sao: %d e %d\n", a*a, b*b);
	return 0;
}
int div(int a, int b) {
	
	printf("A divisao desses numeros eh: %d\n", a/b);
	return 0;
}
int resto(int a, int b) {
	
	printf("O resto da divisao desses numeros eh: %d\n", a%b);
	return 0;
}
int result_soma(int a, int b) {
	
	if(a+b > 0){
		printf("Resultado da soma entre os numeros eh positivo.\n");
	}else{
		printf("Resultado da soma entre os numeros eh negativo.\n");
	}
	
	return 0;
}


void main(){
	
	int x, y;
	
	printf("digite o primeiro numero: ");
	scanf("%d", &x);
	printf("digite o segundo numero: ");
	scanf("%d", &y);
	
	dobro(x, y);
	quadrado(x, y);
	div(x, y);
	resto(x, y);
	result_soma(x, y);
	
	
	system("pause");
}
