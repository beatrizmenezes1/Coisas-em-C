#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mediaAluno(int p1, int n1, int p2, int n2, int n3, float media_n1, float media_n2, float media_total, float final);
void info();

int main(){
	
	int op;
	
	int p1, n1, p2, n2, n3;
	float media_n1, media_n2, media_total, final;
	
	do{
		printf("----- Menu Notas -----\n\n");
		
		printf("1- Media\n");
		printf("2- Info\n");
		printf("0- Sair\n");
		scanf("%d", &op);
		
		switch(op){
		case 1:
				mediaAluno(p1,n1,p2,n2,n3,media_n1,media_n2,media_total,final);
			break;
		case 2:
				info();
			break;
		case 0:
				printf("\n\n\tProcesso Finalizado!\n\n");
			break;
		default:
				printf("\n\n\tErro! Tente Novamente!\n\n");
			break;
		}
		
	}while(op!=0);
			
	return 0;
}

void mediaAluno(int p1, int n1, int p2, int n2, int n3, float media_n1, float media_n2, float media_total, float final){
	
	printf("---------- N1 ----------\n\n");
			
	printf("Digite nota Parcial 1: \n");
	scanf("%d", &p1);
	printf("Digite nota N1: \n");
	scanf("%d", &n1);
			
	media_n1 = (p1+n1)/2;
	
	printf("----------- N2 -----------\n\n");
			
	printf("Digite nota Parcial 2: \n");
	scanf("%d", &p2);
	printf("Digite nota N2: \n");
	scanf("%d", &n2);
			
	media_n2 = (p2+n2)/2;
				
	printf("------------------------------\n\n");	
	printf("Media N1: %.2f\n", media_n1);
	printf("Media N2: %.2f\n", media_n2);
			
	system("pause");
	
		media_total = (media_n1+media_n2)/2;
			
		if(media_total<4.1){
			printf("Reprovado! Nota: %.2f\n\n", media_total);
		}else if((media_total>4.0) && (media_total<5.0)){
			printf("Exame Finalz!\n\n");
			printf("Digite nota N3: \n");
			scanf("%d", &n3);
				
			final = (media_total+n3)/2;
				
					if(final<5){
						printf("\n\n\tReprovado! Nota: %.2f\n\n", final);
					}else{
						printf("\n\n\tAprovado! Nota: %.2f\n\n", final);
					}
		}else{
			printf("\n\n\tAprovado! Nota: %.2f\n\n", media_total);
		}
}

void info(){
	printf("Media >= 5.0: Aprovado!\n");
	printf("Media entre 4.1 e 4.9: Exame final!\n");
	printf("Media menor que 4.1: Reprovado!\n");
}


