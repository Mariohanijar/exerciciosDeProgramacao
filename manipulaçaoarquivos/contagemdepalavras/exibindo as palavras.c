//Contagem de palavras: Escreva um programa para ler um arquivo e contar o número de palavras nele. O programa deve exibir o número total de
//palavras, o número de palavras únicas e a frequência de cada palavra única no arquivo.

#include <stdio.h>

int main(){
	FILE *palavras;
	char linha[100];
	char *result;
	palavras  = fopen("palavras.txt", "rt");
	if(palavras == NULL)
    {
    	printf("Error!");   
    	return 0;             
    }
    int i= 1;
    while(fscanf(palavras, "%d", &i)!= EOF) //EOF = /0 FIM DO ARQUIVO.
	{
	result = fgets(linha, 100, palavras); 
      if (result)  
	  	printf("Linha %d : %s",i,linha);
	  
	  
    i++;
		
	}
	  printf("\nTem: %d de palavras", i-1);
	
	fclose(palavras);
	return 0;
}
