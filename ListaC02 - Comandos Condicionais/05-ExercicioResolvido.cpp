#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 05 - Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou �mpar.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n  Digite um n�mero inteiro: ");
	scanf("%d",&numero);
	system("cls");
	if(numero % 2 == 0){
		printf("\n  O n�mero %d � par!\n",numero);
	}else{
		if(numero % 2 == 1){
			printf("\n  O n�mero %d � �mpar!",numero);
		}
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

