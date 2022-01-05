#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

/* 3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem
10 elementos cada. Imprimir todos os conjuntos;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i; 
	float array[TAM], arrayResult[TAM];
	printf("\nPreencha o Array com %d elementos do tipo float\n",TAM);
	for(i=0; i<TAM; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%f",&array[i]);
	}
	system("cls");
	for(i=0; i<TAM; i++){
		arrayResult[i]=array[i]*array[i];
	}
	printf("\nO vetor ao quadrado é\n");
	for(i=0; i<TAM; i++){
		printf("  Array[%d] = %.2f\n",i,arrayResult[i]);
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

