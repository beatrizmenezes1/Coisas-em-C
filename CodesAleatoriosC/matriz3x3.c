/* Sistema que leia matriz 3x3, calcule e exiba:
a) Soma dos elementos na diagonal
b) Soma dos elementos da coluna 3
c) Soma dos elementos da linha 3
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	int i,j,matriz[3][3];
	int soma_diagonal, soma_colun3, soma_linha3;
	
	printf("Digite os elementos da Matriz 3x3\n\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Elementos: [%d][%d] = %d\n", i,j,matriz[i][j]);
		}
	}
	
	soma_diagonal = matriz[2][0]+matriz[1][1]+matriz[0][2];
	soma_colun3 = matriz[0][2]+matriz[1][2]+matriz[2][2];
	soma_linha3 = matriz[2][0]+matriz[2][1]+matriz[2][2]; 
	
	printf("\nSoma na diagonal: %d\n", soma_diagonal);
	printf("Soma dos elementos na coluna 3: %d\n", soma_colun3);
	printf("Soma dos elementos na linha 3: %d\n", soma_linha3);
	
	
	return 0;
}
