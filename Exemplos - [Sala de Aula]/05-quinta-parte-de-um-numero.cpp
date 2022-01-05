#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 05 - leia um número real e imprima a quinta parte desse número;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero, result;
	printf("  Digite um número real: ");
	scanf("%f",&numero);
	result = numero/5;
	printf("  A quinta parte de %.2f é: %.2f\n",numero,result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

