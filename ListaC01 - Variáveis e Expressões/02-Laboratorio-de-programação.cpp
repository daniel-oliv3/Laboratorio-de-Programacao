#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 2 - Fa�a um programa que leia um n�mero real e o imprima;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	putchar('\n');
	printf("  Digite um n�mero real: ");
	scanf("%f",&numero);
	system("cls");
	putchar('\n');
	printf("  O n�mero real digitado �: %.2f\n",numero);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/
