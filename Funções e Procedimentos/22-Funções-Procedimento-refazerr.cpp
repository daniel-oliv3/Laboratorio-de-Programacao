#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* 22. Crie uma funcao que receba como parametro um valor inteiro e gere como saida n linhas
com pontos de exclamacao, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!;*/

int n_linhas(int num){
	int i, j;
	for(i=1; i<=num; i++)
		printf("!\n");
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	n_linhas(numero);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

