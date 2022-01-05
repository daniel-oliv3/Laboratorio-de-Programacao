#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1 - Faça um programa que leia um número inteiro e o imprima;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("  Digite um número inteiro: ");
	scanf("%d",&numero);
	printf("\n");
	printf("  O número digitado foi: %d\n",numero);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

