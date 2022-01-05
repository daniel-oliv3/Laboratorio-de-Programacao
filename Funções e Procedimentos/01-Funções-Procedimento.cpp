#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 1. Crie uma funcao que recebe como parametro um numero inteiro e devolve o seu dobro;*/

int FuncaoDobro(int num){
	return num*2;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, dobro;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	dobro=FuncaoDobro(numero);
	system("cls");
	printf("\n  O dobro de %d é: %d\n",numero,dobro);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

