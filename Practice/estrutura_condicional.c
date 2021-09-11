#include <stdio.h> 
#include <locale.h> 

int main(){
	setlocale(LC_ALL, "portuguese"); 
	
	int op, a, b, resultado; 
	
	printf("Escolha: \n\n");
	printf("1- Somar\n");
	printf("2- Subtrair\n");
	scanf("%d", &op);

	switch(op){ 
	
		case 1: 
				
				printf("Digite um número: ");
				scanf("%d", &a);
				printf("Digite mais um número: ");	
				scanf("%d", &b);	
						
				resultado = a+b;
				
				printf("Resultado da soma: %d\n", resultado);
				
	
				if(resultado>=0){ 
					printf("Número é maior igual 0\n");
				}
				
			break;
			
		case 2: 
				
				printf("Digite um número: ");
				scanf("%d", &a);
				printf("Digite mais um número: ");	
				scanf("%d", &b);	
						
				resultado = a-b;
				
				printf("Resultado da subtração: %d\n", resultado);
				
				if(resultado>=0){
					printf("Número é maior igual a 0\n");
				}else{
					printf("Número é menor 0\n"); 
				}
				
				
			break;
			
		default:
				
				printf("Opção Inválida!/n"); 
			
			break; 
	}
	
	return 0;
}


