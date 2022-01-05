#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 5

/* Crie um programa contendo as seguintes funcoes que recebem um vetor V numeros reais
como parametro:
* Impressao normal do vetor.
* Impressao inversa.
* Funcao que retorna a media aritmetica dos elementos do vetor.;*/

int ImpressaoNormal(int *v);
int ImpressaoInversa(int *v);
int ImpressaoMedia(int *v);



int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, op, vetor[tam];
	putchar('\n');
	for(i=0; i<tam; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vetor[i]);
	}
	system("cls");
	putchar('\n');
	printf("\n  Informe a operação desejada\n\n");
	printf("  1-  Impressão normal do vetor.\n");
	printf("  2-  Impressão inversa.\n");
	printf("  3-  Impressão da média aritmética.\n");
	printf("\n  Opção: ");
	scanf("%d",&op);
	system("cls");
	putchar('\n');
	switch(op){
		case 1:
			 ImpressaoNormal(vetor);
			 break;
		case 2:
			 ImpressaoInversa(vetor);
			 break;
		case 3:
			 ImpressaoMedia(vetor);
			 break; 	 
	}
	putchar('\n');
	system("Pause");
	return 0;
}



int ImpressaoNormal(int *v){
	int i;
	for(i=0; i<tam; i++){
		printf("  Vetor[%d] = %d\n",i,v[i]);
	}
}

int ImpressaoInversa(int *v){
	int i;
	for(i=tam-1; i>=0; i--){
		printf("  Vetor[%d] = %d\n",i,v[i]);
	}
}

int ImpressaoMedia(int *v){
	int i;
	float media=0.0;
	for(i=0; i<tam; i++){
		media=media+v[i]/tam;
	}
	printf("\n  A média aritmética é: %.2f\n",media);
	
}

/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

