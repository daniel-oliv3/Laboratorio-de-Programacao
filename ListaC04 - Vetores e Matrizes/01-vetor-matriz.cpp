#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 6

/* 1. Faca um programa que possua um vetor denominado A que armazene 6 numeros inteiros.
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicoes
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posicao 4, atribuindo a esta posicao o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, soma, A[TAM], B[TAM]={1,0,5,-2,-5,7};
	char ch;
	putchar('\n');
	printf("Preencha o Vetor com 6 Elementos\n\n");
	for(i=0; i<TAM; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&A[i]);
	}
	fflush(stdin);
	printf("\n\nInforme a Operação Desejada\n\n");
	printf("  a) Atribuição dos valores 1, 0, 5, -2, -5, 7\n  b) Soma entre valores das posições A[0] + A[1] + A[5]\n  c) Modificar o Vetor indice A[4] = 100\n  d) Mostrar na tela cada valor do vetor A\n\n");
	printf("  Opção: ");
	scanf("%c",&ch);
	fflush(stdin);
	switch(ch){
		case 'a':
		case 'A':
			putchar('\n');
			for(i=0; i<TAM; i++){
				A[i]=B[i];
				printf("  A[%d] = %d\n",i,A[i]);
			}
			break;
		case 'b':
		case 'B':
			soma=(A[0]+A[1]+A[5]);
			printf("\n  A soma dos indices do vetor A[0]+A[1]+A[5]\n");
			printf("  A[%d]+A[%d]+A[%d] = %d\n",A[0],A[1],A[5],soma);
			break;
		case 'c':
		case 'C':
			A[4]=100;
			putchar('\n');
			for(i=0; i<TAM; i++){
				printf("  A[%d] = %d\n",i,A[i]);
			}
			break;
		case 'd':
		case 'D':
			putchar('\n');
			for(i=0; i<TAM; i++){
				printf("  A[%d] = %d\n",i,A[i]);
			}				
	}
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

