#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//procedimentos

void adicao();
void subtracao();
void multiplicacao();
void divisao();

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int opcao=0;
	do{
		printf("\n\tMENU\n\n");
		printf("1- Adição\n");
		printf("2- Subtração\n");
		printf("3- Multiplicação\n");
		printf("4- Divisão\n");
		printf("0- Sair\n");
		scanf("%d", &opcao);
	
		system("cls");
		switch(opcao){
			case 1:
					adicao();		
				break;
			case 2:
					subtracao();
				break;
			case 3:
					multiplicacao();
				break;
			case 4:
					divisao();
				break;
			case 0:
					printf("\n\n\tFinalizado com sucesso\n\n");
				break;
			default:
					printf("\n\n\tOpção inválida");
				break;	
		}

	system("cls");
	}while(opcao!=0);
	system("pause");
	return 0;
}

void adicao(){
	int num1, num2, soma;
	
	printf("\n\tAdição\n");
	
	printf("Insira um número: \n");
	scanf("%d", &num1);
	printf("Insira outro número: \n");
	scanf("%d", &num2);
	
	soma= num1+num2;
	
	printf("A soma dos números é: %d\n\n", soma);
	system("pause");

}

void subtracao(){
	int num1, num2, sub;
	
	printf("\n\tSubtração\n");
	
	printf("Insira um número: \n");
	scanf("%d", &num1);
	printf("Insira outro número: \n");
	scanf("%d", &num2);
	
	sub= num1-num2;
	
	printf("A subtração dos números é: %d\n\n", sub);
	system("pause");
	
}

void multiplicacao(){
	int num1, num2, mult;
	
	printf("\n\tMultiplicação\n");
	
	printf("Insira um número: \n");
	scanf("%d", &num1);
	printf("Insira outro número: \n");
	scanf("%d", &num2);
	
	mult= num1*num2;                     
	
	printf("A multiplicação dos números é: %d\n\n", mult);
	system("pause");
	
}

void divisao(){
	float num1, num2, div;
	
	printf("\n\tDivisão\n");
	
	printf("Insira um número: \n");
	scanf("%f", &num1);
	printf("Insira outro número: \n");
	scanf("%f", &num2);
	
	div= num1/num2;
	
	printf("A divisão dos números é: %.2f\n\n", div);
	system("pause");	
}
