//Criar um algoritmo que leia e armazene os elementos de uma matriz inteira M 10x10 e imprima na tela essa matriz.
//Depois de imprimir faça as seguinte modificações na matriz:
//Troque a segunda linha pela oitava linha;
//A quarta coluna pela décima coluna;
//A diagonal principal pela diagonal secundária.
//Imprima a matriz modificada.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	int matriz[10][10];
	int i, j;
	int aux;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	
	
	printf("matriz original \n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("[%d]\t", matriz[i][j]);
		}
		printf("\n");
		
	}
	printf("################# \n" );
	printf("segunda linha pela oitava linha \n" );
	
		for(j=0;j<10;j++){
			aux = matriz[1][j];
			matriz[1][j] = matriz[7][j];
			matriz[7][j] = aux;
			
		}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("[%d]\t", matriz[i][j]);
		}
		printf("\n");
		
	}
	printf("################# \n" );
	printf("A quarta coluna pela décima coluna \n" );
	
		for(i=0;i<10;i++){
			aux = matriz[i][3];
			matriz[i][3] = matriz[i][9];
			matriz[i][9] = aux;
		}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("[%d]\t", matriz[i][j]);
		}
		printf("\n");
		
	}
	printf("################# \n" );
	printf("diagonal principal pela diagonal secundária \n" );
	
	for(i=0,j=9;i<10;j--,i++){
			aux = matriz[i][i];
			matriz[i][i] = matriz[i][j];
			matriz[i][j] = aux;
	}
		for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("[%d]\t", matriz[i][j]);
		}
		printf("\n");
		
	}
	
	return 0;
}
