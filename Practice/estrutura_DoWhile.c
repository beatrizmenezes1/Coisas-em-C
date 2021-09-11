#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "portuguese");
	
	int op; 
	
	do{
		printf("---- MENU ----\n\n");
		
		printf("1- Hello World - Inglês\n");
		printf("2- Óla Mundo - Português\n");
		printf("3- Kon'nichiwa sekai - Japonês\n");
		printf("0- Sair\n\n");
		scanf("%d", &op);
		
		switch(op){
			case 1:
					printf("\tHello World\n\n");
				break;
			case 2:
					printf("\tÓla Mundo\n\n");
				break;
			case 3:
					printf("\tKon'nichiwa sekai\n\n");
				break;
			case 0:
					printf("\tProcesso Finalizado\n\n");
				break;
			default:
					printf("\tOpção Inválida\n\n");
				break;
		}
		
		
	}while(op!=0); 

    return 0;
}
