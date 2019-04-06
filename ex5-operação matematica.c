#include <stdio.h>

/* definição da função soma */
int soma(int a, int b) {
	int res;
	res = a + b;
	return (res);
}
/* definição da função diferença */
int difer(int a, int b) {
	int res;
	res = a - b;
	return (res);
}
/* definição da função multiplicacao */
int multip(int a, int b) {
	int res;
	res = a * b;
	return (res);
}
/* definição da função divisao */
float div(float a, float b) {
	float res;
	res = a / b;
	return (res);
}

int op;

void main() {
	printf("Qual operacao deseja realizar?\n\n1.Adicao\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n\n--> ");
	scanf("%d", &op);
	
	int result;
	float resultado;
	
	switch(op){
		case 1:
			result;
			result = soma(12,8); /* chamada */
			printf("O resultado da soma eh: %d\n\n", result);	
		break;
		case 2:
			result;
			result = difer(12,8); /* chamada */
			printf("O resultado da subtracao eh: %d\n\n", result);
		break;
		case 3:
			result;
			result = multip(12,8); /* chamada */
			printf("O resultado da multplicacao eh: %d\n\n", result);
		break;
		case 4:
			resultado;
			resultado = div(12,8); /* chamada */
			printf("O resultado da divisao eh: %2.1f\n\n", resultado);
		break;
	}
	
	system("pause");
}
