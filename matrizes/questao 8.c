//Crie um algoritmo onde o usuário vai inserir valores para duas matrizes de
//3x3 e depois vai calcular e imprimir a soma dos valores dessas matrizes.

#include <stdio.h>
int main(){
	int matriz[3][3], matriz_2[3][3], matriz_3[3][3];
	int i, j, soma;
	printf("insira os valores da matriz 1 \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
		
			printf("[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);
			
		}
	}
	
	
	printf("insira os valores da matriz 2 \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("MAT[%d][%d] = ", i, j);
			scanf("%d", &matriz_2[i][j]);
			
		}
	}
	
for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			matriz_3[i][j] = matriz[i][j] + matriz_2[i][j];
			printf("%d\t", matriz_3[i][j]);
			
		}
		printf("\n");
	}






return 0;
}
