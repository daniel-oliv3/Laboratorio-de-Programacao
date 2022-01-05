#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<conio.h>
#define tam 20

/* 43. Faca uma funcao que receba um vetor de inteiros e o preencha com numeros aleatorios
sem repeticao.;*/

void numerosAleatorios(int v[]);  //prototipo da função

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, vetor[tam], array[tam];  //carga inicial altomatica de vetor, valor zerp em todos os indices
	numerosAleatorios(vetor);
	putchar('\n');
	system("Pause");
	return 0;
}

void numerosAleatorios(int v[]){
	int i;
	srand(time(NULL));
	for(i=0; i<tam; i++){
		printf("%d ",rand()%500); //gerando valores aleatorios entre zero e 500
	}
	putchar('\n');
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

