#include <stdio.h>
void menu(){
		printf("bem vindo ao banco KEMADI, qual a sua necessidade? \n");
		printf("O. Abrir uma conta? \n");
		printf("B. Consulta de saldo? \n");
		printf("D. Deseja realizar um deposito? \n");
		printf("W. Realizar um saque? \n");
		printf("C. Fechar a conta ); \n");
		printf("P. Imprima todos os números de contas e valores \n");
		printf("E. Protocolo Armageddon \n");
	}
int main(){
	
	char escolha;
	int i, x;
	do{
		menu();
		scanf("%c", &escolha);
		if(escolha == 'O' ||escolha == 'o'){
			int conta[50];
			float deposito;
			printf("Digite o valor que sera depositado: ");
			scanf("%f", &deposito);
			conta[i] = 1001;
			printf("seu numero de conta sera: %d", conta[i]);
		}
		
	}while(escolha != 'e' ||escolha != 'E');
	
	return 0;
}
