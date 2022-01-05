#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 2 - Faça um programa que leia um número real e o imprima;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	putchar('\n');
	printf("  Digite um número real: ");
	scanf("%f",&numero);
	system("cls");
	putchar('\n');
	printf("  O número real digitado é: %.2f\n",numero);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/
