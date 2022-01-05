#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

/* Faca um programa que receba do usuario um vetor com 10 posicoes. Em seguida devera
ser impresso o maior e o menor elemento do vetor.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int array[TAM], i, maior, menor;
	printf("Informe 10 números inteiros!\n\n");
	for(i=0; i<TAM; i++){
		printf("Digite o %dº número: ",i+1);
		scanf("%d",&array[i]);
	maior=array[0];
	menor=array[0];	
	if(array[i] > maior){
		maior=array[i];
	}else{
		if(array[i] < menor){
			menor=array[i];
		}
	}
	}
	printf("Maior %d\n",maior);
	printf("menor %d\n",menor);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

