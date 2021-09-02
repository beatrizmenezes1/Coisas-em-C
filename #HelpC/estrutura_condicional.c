/*
	#Help_1
	IF ELSE e SWITCH CASE - Estrutura Condicional

    https://www.vichinsky.com.br/Cbasico/pag13b.html
*/

//bibliotecas
#include <stdio.h> 
#include <locale.h> //serve para deixar em português

int main(){
	setlocale(LC_ALL, "portuguese"); //comando da biblioteca locale.h
	
	int op, a, b, resultado; //variaveis, sendo a op para o switch case
	
	//menu simples para exemplificar a utilização do switch case
	printf("Escolha: \n\n");
	printf("1- Somar\n");
	printf("2- Subtrair\n");
	scanf("%d", &op);

/*
é uma estrutura de decisão que permite a execução de um conjunto de instruções a partir de pontos diferentes, 
conforme o resultado de uma expressão de controle. O resultado desta expressão é comparado ao valor de cada um dos rótulos, 
e as instruções são executadas a partir desde rótulo
*/
	switch(op){ //variavel de comparação
	
		case 1: // se op for igual a 1 então a situação 1 será executada
				
				printf("Digite um número: ");
				scanf("%d", &a);
				printf("Digite mais um número: ");	
				scanf("%d", &b);	
						
				resultado = a+b;
				
				printf("Resultado da soma: %d\n", resultado);
				
	
				if(resultado>=0){ //if (se) processa a avaliação da expressão que se encontra entre parênteses
					printf("Número é maior igual 0\n");
				}
				
			break; //quebra
			
		case 2: //caso op for igual a 2 então a situação 2 será executada
				
				printf("Digite um número: ");
				scanf("%d", &a);
				printf("Digite mais um número: ");	
				scanf("%d", &b);	
						
				resultado = a-b;
				
				printf("Resultado da subtração: %d\n", resultado);
				
				//if com 2 blocos de instruções
				if(resultado>=0){
					printf("Número é maior igual a 0\n");
				}else{
					printf("Número é menor 0\n"); // caso a expressão entre parenteses seja falsa
				}
				
				
			break; //quebra
			
		default: // caso op for diferente de 1 e 2 nenhuma das situações será executada
				
				printf("Opção Inválida!/n"); 
			
			break; //quebra
	}
	
	return 0;
}
