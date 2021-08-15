/* 
	Sistema que leia uma matriz 2x2 e calcule e exiba:
	a) Soma de todos os elementos;
	b) Soma da linha 1;
	b) Soma da coluna 2;	
*/

#include <stdio.h>

int main(){
	
	int i,j, matriz[2][2]; //linha e coluna
	int soma_1, soma_2, soma_total;
	
	printf("---------- Matriz 2x2 ----------\n\n");
	
	printf("Digite os elementos para a matriz: \n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Matriz 2x2: [%d] [%d] = [%d]\n", i,j,matriz[i][j]);
		}
	}
	printf("-----------------------------------\n");
	soma_total = matriz[0][0] + matriz[0][1] + matriz[1][0] + matriz[1][1];
	printf("A soma total: %d\n", soma_total);
	
	printf("-----------------------------------\n");
	soma_1 = matriz[0][0] + matriz[0][1];
	printf("A soma da linha 1: %d\n", soma_1);
	
	printf("-----------------------------------\n");
	soma_2 = matriz[0][1] + matriz[1][1];
	printf("A soma da coluna 2: %d", soma_2);
		
	return 0;
}
