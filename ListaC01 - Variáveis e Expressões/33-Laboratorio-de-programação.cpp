#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua �rea.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int lado=0;
	printf("\n  Digite o valor do lado do quadrado: ");
	scanf("%d",&lado);
	system("cls");
	printf("\n  A �rea total: %d\n",lado*lado);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

