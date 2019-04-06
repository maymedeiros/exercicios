#include <stdio.h>

int quadrado(int a){
	int quadrado;
	quadrado = a*2;
	return (quadrado);
}
int intervalo(int b){
	printf("Numero esta entre 10 e 100  intervalo permitido");
	return 0;
}
int diferenca (int x, int y){
	int diferenca;
	if(y < x){
		diferenca = x-y;
		//printf(diferenca);
	}else{
		x + 1;
		//printf(" %d ", x + 1);
	}
	
	return (diferenca);
	//return 0;
}


int num1, num2;

void main()
	  {
	  	printf("Digite o primeiro numero: ");
	  	scanf("%d", &num1);
	  	printf("Digite o segundo numero: ");
	  	scanf("%d", &num2);
	  	
	  	if (num1 > 0){
	  		printf("Quadrado do primeiro numero eh: %d", quadrado(num1));
		  }else if(10 < num2 < 100 ){
		  	intervalo(num2);
		  }else{
		  	difenrenca(num1, num2);
		  }
	  	
	  	
	
	  
	  }

