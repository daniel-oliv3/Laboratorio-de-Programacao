#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Leia um valor de area em metros quadrados m2 e apresente-o convertido em hectares.
A formula de conversao e: H = M * 0.0001; sendo M a area em metros quadrados e H
a area em hectares.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float H, M;
	printf("\n  Digite um valor de �rea em metros quadrados m�: ");
	scanf("%f",&M);
	system("cls");
	H=M*0.0001;
	printf("\n  A convers�o de m� para hectares �: %.2f\n\n",H);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

