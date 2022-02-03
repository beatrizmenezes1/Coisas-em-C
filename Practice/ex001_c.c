#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 1
//Escreva uma função que peça dois números inteiros ao usuário e exibe o valor soma seguido pelo maior deles.

int int_soma(int n1, int n2);

int int_soma(int n1, int n2){
	return n1+n2;
}


int main (){
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	
	printf("Números Inteiros\n\n");
	printf("Digite um número: \n");
	scanf("%d", &n1);
	printf("Digite outro número: \n");
	scanf("%d", &n2);
	
	printf("A soma: %d\n\n", int_soma(n1,n2) );
	
	if(n1>n2){
		printf("%d é maior número entre os dois\n", n1);
	}else if(n1==n2){
		printf("Os dois números são iguais\n");
	}else{
		printf("%d é maior número entre os dois\n", n2);
	}
	
	return 0;
}
