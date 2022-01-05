#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A formula
de conversao e: M = 0.91 * J; sendo J o comprimento em jardas e M o comprimento
em metros.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float M, J;
	printf("\n  Digite um valor de comprimento em jardas: ");
	scanf("%f",&J);
	system("cls");
	M=0.91*J;
	printf("\n  A conversão de jardas para metros é: %.2f\n\n",M);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

