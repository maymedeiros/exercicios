#include <stdio.h>

int idade, titulo;
char nome;

void main()
	  {
	  	printf("Digite seu nome: ");
	  	scanf("%s", &nome);
	  	printf("Digite sua idade: ");
	  	scanf("%d", &idade);
	  	printf("Digite o numero do seu titulo: ");
	  	scanf("%d", &titulo);
	  	
	  	if(idade > 18 && idade < 70){
	  		printf("Votacao obrigatoria!\n");
		  }else{
		  	printf("Voto facultativo.\n");
			}
		  	
	  	
	  system ("pause");
	  }

