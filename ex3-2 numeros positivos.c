#include <stdio.h>

void main(){
	int num1, num2;
	
	do{
		printf("Digite dois numeros positivos(APENAS POSITIVOS): ");
		scanf("%d %d", &num1,&num2);
	}while(num1 < 0 || num2 < 0);
	
	printf("%d -- %d\n", num1, num2);
	
	
	
	
	
	system("pause");
}
