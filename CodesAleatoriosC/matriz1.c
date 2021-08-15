#include <stdio.h>
#include <stdlib.h>

//Crie uma matriz 3x3, insira os elementos e exiba

int main(){
	
	int matriz[3][3];	
	int i=0,j=0; // linha e coluna;
	
    //entrada;
	printf("-------------- Matriz 3x3 --------------\n\n");
	printf("Digite os elemnetos para a matriz: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
    //saída;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Matriz: [%d][%d] = %d\n", i,j,matriz[i][j]);		}
	}
	
	return 0; //the end;
}
