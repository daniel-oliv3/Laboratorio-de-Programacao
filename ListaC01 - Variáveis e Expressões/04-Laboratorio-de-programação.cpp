#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 4 - Leia um número real e imprima o resultado do quadrado desse numero;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("  Digite um número real: ");
	scanf("%f",&numero);
	system("cls");
	putchar('\n');
	printf("  O quadrado de %.1f é: %.1f\n",numero,numero*numero);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

