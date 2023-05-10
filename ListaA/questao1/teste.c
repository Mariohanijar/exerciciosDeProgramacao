#include <stdio.h>
#include <string.h>
int main(){
	int escolha;
	char nome[10][50], numero[10][50];
	int num_m[10];
	int i, x;
	int contador;
	char comparacao[100];
	do{
		printf("bem vindo ao aeroporto do Giras ");
		printf("selecione o que deseja fazer: \n");
		printf("1. cadastrar dados do cliente \t 2. cadastrar milhagem \t 3. listar milhagem dos clientes \n");
		printf("4. imprimir os nomes com maior e menor milhagem \t 5. imprimir todos os dados dos clientes \t 6. sair \n");
		scanf("%d", &escolha);
		
			if(escolha == 1){
				fflush(stdin);
				for(i=0; i<3; i++){
					printf("digite seu nome: ");
					gets(nome[i]);
					printf("digite seu numero para contato: ");
					gets(numero[i]);
				}
			} 
			else if(escolha == 2){
				for(i=0; i<3; i++){
					printf("digite sua milhagem: ");
					scanf("%d", &num_m[i]);
				}
			}
			else if(escolha == 3){
				printf("digite um nome para buscar: \n");
				fflush(stdin);
				gets(comparacao);
					for(i=0; i<3; i++){
						if(strcmp(comparacao, nome[i])==0){
							printf("Nome %s \n", nome[i]);
							printf("numero de milhas %d \n", num_m[i]);
						} 
					}
				}
				else if(escolha == 4){
				fflush(stdin);
				
			    int max_milhas = num_m[0];
    			int min_milhas = num_m[0];
    			int pos_max_milhas = 0;
    			int pos_min_milhas = 0;
    			for(i = 1; i < 3; i++){
        			if(num_m[i] > max_milhas){
          			  	max_milhas = num_m[i];
            			pos_max_milhas = i;
        			}
        			else if(num_m[i] < min_milhas){
            		min_milhas = num_m[i];
            		pos_min_milhas = i;
        			}
    			}
    			printf("Nome com maior milhagem: %s \n", nome[pos_max_milhas]);
    			printf("Nome com menor milhagem: %s \n", nome[pos_min_milhas]);
				}	
				else if(escolha == 5){
					for(i=0; i<3; i++){
						printf("Nome: %s \n", nome[i]);
						printf("Numero para contato: %s \n", numero[i]);
						printf("Numero de milhas: %d \n", num_m[i]);
					}
			}
	}while(escolha != 6);
	return 0;
}

