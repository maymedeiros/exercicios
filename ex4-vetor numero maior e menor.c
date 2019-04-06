#include <stdio.h>
#define TAM 5

int vet[TAM], a, maior=0, menor=0;

void main(){

    //recebendo os valores do vetor
    for (a=0;a<TAM;a++){
      printf("Digite um numero: ");
      scanf("%d", &vet[a]);
      
      /*as variaveis maior e menor, recebm inicialmente o valor
      do primeiro elemento do vetor*/
	  if(a==0){
		maior=vet[a];
		menor=vet[a];
	  }
	  
	  //condiçao para receber maior e menor valor
      if(vet[a]>maior){
        maior=vet[a];
      }else if(vet[a]<menor){  	
        menor=vet[a];
		}
    }
    
    printf("\nO maior valor eh %d\n", maior);
    printf("\nE o menor valor eh %d\n\n", menor);
    
	system("pause");
}
