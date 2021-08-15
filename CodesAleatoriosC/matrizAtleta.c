#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int linha, coluna, contador;
	float vetaltura[2][3], soma;
	
	contador = 1;
	soma = 0;
	
	printf("Cadastro das Alturas dos Atletas Títulares\n");
	
	for(linha=0;linha<2;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("Digite a altura do Atleta número %d\t", contador);
			scanf("%f", &vetaltura[linha][coluna]);
			
			contador = contador+1;
			soma = soma+vetaltura[linha][coluna];			
		}
			if(linha==0){
				printf("\nCadastro das Alturas dos Atletas Reservas\n\n");
			}
	}
	
	system("pause");
	system("cls");
	
	for(linha=0;linha<2;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("Altura [%d][%d] = %.2f\n", linha,coluna,vetaltura[linha][coluna]);	
 		}
	}
	
	printf("Média da Altura destes Atletas = %.2f\n\n", (soma/(contador-1)));
}
