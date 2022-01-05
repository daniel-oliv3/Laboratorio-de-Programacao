#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int idade, anoAtual, res;
	printf("\n  Digite a sua idade: ");
	scanf("%d",&idade);
	printf("  Digite o ano atual: ");
	scanf("%d",&anoAtual);
	res=anoAtual-idade;
	system("cls");
	printf("\n  O seu ano de nascimento é: %d\n",res);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

