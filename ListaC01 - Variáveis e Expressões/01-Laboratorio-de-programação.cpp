#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 - Fa�a um programa que leia um n�mero inteiro e o imprima;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	putchar('\n');
	printf("  Digite um n�mero inteiro: ");
	scanf("%d",&numero);
	system("cls");
	putchar('\n');
	printf("  O n�mero inteiro digitado �: %d\n",numero);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

