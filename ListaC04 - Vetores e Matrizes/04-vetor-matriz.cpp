#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 8

/*4. Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois valores
X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final seu programa
devera escrever a soma dos valores encontrados nas respectivas posicoes X e Y . ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, x, y, soma=0, vet[TAM];
	printf("\nPreencha o Array com %d n�mero inteiro\n\n",TAM);
	for(i=0; i<TAM; i++){
		printf("  Digite o %d� n�mero: ",i+1);
		scanf("%d",&vet[i]);
	}
	printf("\nInforme dois valores, correspondentes a duas posi��es no array(0 � %d)\n\n",TAM-1);
	printf("  Digite um n�mero correspondente a posi��o X: ");
	scanf("%d",&x);
	printf("  Digite um n�mero correspondente a posi��o Y: ");
	scanf("%d",&y);
	soma=vet[x]+vet[y];
	printf("\nA soma dos indices, indice[%d] e indice[%d]\n",x,y);
	printf("  valor[%d] + valor[%d] = %d\n",vet[x],vet[y],soma);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

