#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 1
//Escreva uma fun��o que pe�a dois n�meros inteiros ao usu�rio e exibe o valor soma seguido pelo maior deles.

int int_soma(int n1, int n2);

int int_soma(int n1, int n2){
	return n1+n2;
}


int main (){
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	
	printf("N�meros Inteiros\n\n");
	printf("Digite um n�mero: \n");
	scanf("%d", &n1);
	printf("Digite outro n�mero: \n");
	scanf("%d", &n2);
	
	printf("A soma: %d\n\n", int_soma(n1,n2) );
	
	if(n1>n2){
		printf("%d � maior n�mero entre os dois\n", n1);
	}else if(n1==n2){
		printf("Os dois n�meros s�o iguais\n");
	}else{
		printf("%d � maior n�mero entre os dois\n", n2);
	}
	
	return 0;
}
