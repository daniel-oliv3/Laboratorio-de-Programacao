#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 31. Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	system("cls");
	printf("\n  O antecessor de %d é: %d\n",numero,numero-1);
	printf("  O sucessor de %d é: %d\n",numero,numero+1);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

