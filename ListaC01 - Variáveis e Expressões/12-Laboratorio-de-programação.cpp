#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 12 - Leia uma distancia em milhas e apresente-a convertida em quilometros. A formula de
conversao e: K=1,61*M, sendo K a distancia em quilometros e M em milhas.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float m, k;
	printf("  Digite uma distancia em milhas: ");
	scanf("%f",&m);
	k=1.61*m;
	system("cls");
	printf("  A conversão de minhas em quilometros é\n");
	printf("\n    Milhas: %.2f\n    Quilometros: %.2f\n\n",m,k);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

