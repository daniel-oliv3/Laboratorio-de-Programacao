#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 5 - Leia um número real e imprima a quinta parte deste numero;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("  Digite um número real: ");
	scanf("%f",&numero);
	system("cls");
	putchar('\n');
	printf("  A quinta parte de %.1f é: %.1f\n",numero,numero/5);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/
