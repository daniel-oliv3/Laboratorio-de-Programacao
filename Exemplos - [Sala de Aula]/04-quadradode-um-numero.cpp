#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 04 - Leia um n�mero real e imprima o resultado do quadrado desse numero;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero, result;
	printf("  Digite um n�mero real: ");
	scanf("%f",&numero);
	result = numero*numero;
	system("cls");
	printf("\n  O quadrado de %.2f �: %.2f\n",numero,result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

