#include <stdio.h>

int pos, neg, dobroPos, dobroNeg, resMult;

void main (){
	
	printf("Digite um numero positivo:");
	scanf("%d", &pos);
	printf("Digite um numero negativo:");
	scanf("%d", &neg);

	dobroPos = pos*2;
	dobroNeg = neg*2;

	resMult = pos*neg;

	printf("1a. - Dobro dos numeros %d e %d eh: %d e %d\n", pos, neg, dobroPos, dobroNeg);
	printf("2a. - Produto dos numeros %d e %d eh: %d\n", pos, neg, resMult);

	if(resMult > 1){
		printf("3a. - Resultado da multiplicacao anterior eh positivo\n");
	}else{
		printf("3a. - Resultado da multiplicacao anterior eh negativo\n");
	}
	
	system("pause");
}
