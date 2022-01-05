#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A formula
de conversao e: J = m/0.91; sendo J o comprimento em jardas e M o comprimento em
metros
.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float J, M;
	printf("\n  Digite um valor de comprimento em metros: ");
	scanf("%f",&M);
	system("cls");
	J=M/0.91;
	printf("\n  A conversão de metros em jardas é: %.2f\n\n",J);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

