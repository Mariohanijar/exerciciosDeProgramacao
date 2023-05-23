//Conversão de Temperatura: Escreva um programa para ler um arquivo que
//contém dados de temperatura em Celsius e convertê-los em Fahrenheit. O
//programa deve gravar os dados de temperatura convertidos em outro
//arquivo.
#include <stdio.h>
int main(){

	int c = 0, f = 0;
	//c/5 = (f-32)/9;
	FILE *celsius;
	FILE *fahrenheit;
	
	celsius = fopen("celcius.txt", "r");
	if(celsius == NULL)
   {
      printf("Error!");   
      return 0;             
   }
   fahrenheit = fopen("fahrenheit.txt", "w");
   if(fahrenheit == NULL)
   {
      printf("Error!");   
      return 0;          
   }
	int num;
	while(fscanf(celsius, "%d", &num)!= EOF) //EOF = /0 FIM DO ARQUIVO.
	{
		c = num;
		f = (c*9)/5 +32;
		fprintf(fahrenheit, "%d \n", f);
	}
	fclose(celsius);
	fclose(fahrenheit);

	return 0;
}
