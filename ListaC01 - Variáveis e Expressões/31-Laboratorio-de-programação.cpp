#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n  Digite um n�mero inteiro: ");
	scanf("%d",&numero);
	system("cls");
	printf("\n  O antecessor de %d �: %d\n",numero,numero-1);
	printf("  O sucessor de %d �: %d\n",numero,numero+1);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

