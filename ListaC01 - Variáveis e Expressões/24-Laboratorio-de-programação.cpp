#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 24. Leia um valor de area em metros quadrados m2 e apresente-o convertido em acres. A
formula de conversao e: A = M * 0,000247; sendo M a area em metros quadrados e A
a area em acres.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float A, M;
	printf("\n  Digite um valor de �rea em metros quadrados(m�): ");
	scanf("%f",&M);
	system("cls");
	A=M*0.000247;
	printf("\n  A convers�o de metros(m�) em acres �: %.2f\n\n",A);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

