#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 25. Leia um valor de �rea em acres e apresente-o convertido em metros quadrados m2. A
formula de conversao e: M = A * 4048.58; sendo M a �area em metros quadrados e A a
�area em acres.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float M, A;
	printf("\n  Digite um valor de �rea em acres: ");
	scanf("%f",&A);
	system("cls");
	M=A*4048.58;
	printf("\n  A convers�o de acres para mestros quadrados(m�) �: %.2f\n\n",M);
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

