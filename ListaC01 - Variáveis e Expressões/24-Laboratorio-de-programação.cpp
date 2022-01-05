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
	printf("\n  Digite um valor de área em metros quadrados(m²): ");
	scanf("%f",&M);
	system("cls");
	A=M*0.000247;
	printf("\n  A conversão de metros(m²) em acres é: %.2f\n\n",A);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

