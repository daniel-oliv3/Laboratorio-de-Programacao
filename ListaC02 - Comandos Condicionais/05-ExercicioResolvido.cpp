#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 05 - Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	system("cls");
	if(numero % 2 == 0){
		printf("\n  O número %d é par!\n",numero);
	}else{
		if(numero % 2 == 1){
			printf("\n  O número %d é ímpar!",numero);
		}
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

