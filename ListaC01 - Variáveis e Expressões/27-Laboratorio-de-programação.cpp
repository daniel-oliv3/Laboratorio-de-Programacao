#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Leia um valor de area em hectares e apresente-o convertido em metros quadrados m2.
A formula de conversao e: M = H * 10000; sendo M a area em metros quadrados e H
a area em hectares..;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	double H, M;
	printf("\n  Digite um valor de área em hectares: ");
	scanf("%dl",&H);
	system("cls");
	M=H*10000;
	printf("\n  A conversão de hectares para M² é: %dl\n\n",M);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

