#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 05 - leia um n�mero real e imprima a quinta parte desse n�mero;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero, result;
	printf("  Digite um n�mero real: ");
	scanf("%f",&numero);
	result = numero/5;
	printf("  A quinta parte de %.2f �: %.2f\n",numero,result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

