#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 13 - Leia uma distancia em quilometros e apresente-a convertida em milhas. A formula de
conversao e: M = K/1.61 , sendo K a distancia em quilometros e M em milhas.;*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float m, k;
	printf("\n  Digite uma distancia em quilometros: ");
	scanf("%f",&k);
	m=k/1.61;
	system("cls");
	printf("\n  A convers�o de quilomentros em milhas �\n\n");
	printf("    Quilometros: %.2f\n    Milhas: %.2f\n\n",k,m);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

