#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 04 - Leia um número real e imprima o resultado do quadrado desse numero;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero, result;
	printf("  Digite um número real: ");
	scanf("%f",&numero);
	result = numero*numero;
	system("cls");
	printf("\n  O quadrado de %.2f é: %.2f\n",numero,result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

