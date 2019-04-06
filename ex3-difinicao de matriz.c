#include <stdio.h>

int i, j, x, y;

void main(){
	
	printf("Digite o tamanho de linhas e colunas para a matriz: \n");
	scanf("%d %d", &i, &j);
	
	int m[i][j];
	
	printf("\n\tMATRIZ %dx%d", i, j);
	printf("\n======================\n\n");
	
	for (x=1; x<=i; x++){
		printf("|");
		for (y=1; y<=j; y++){
			printf(" a%d%d ", x, y, m[x][y]);
		}
		printf("|\n");
	}
	
	printf("\n======================\n\n");
	
	system("pause");
}
