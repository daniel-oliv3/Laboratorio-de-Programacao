#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 5 - Leia um n�mero real e imprima a quinta parte deste numero;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("  Digite um n�mero real: ");
	scanf("%f",&numero);
	system("cls");
	putchar('\n');
	printf("  A quinta parte de %.1f �: %.1f\n",numero,numero/5);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/
