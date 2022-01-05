#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* 45. Faca um programa para converter uma letra maiuscula em letra minuscula. Use a tabela
ASCII para resolver o problema.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char caractere;
	printf("\n  Digite um caractere: ");
	scanf("%c",&caractere);
	system("cls");
	caractere=toupper(caractere);
	printf("\n  O Caractere é: %c\n",caractere);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

