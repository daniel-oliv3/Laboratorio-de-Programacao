#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3 - Pe�a ao usuario para digitar  tr�s valores inteiros e imprimir a soma deles;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, num3, result;
	printf("  Digite o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("  Digite o segundo n�mero: ");
	scanf("%d",&num2);
	printf("  Digite o terceiro n�mero: ");
	scanf("%d",&num3);
	system("cls");
	result = num1+num2+num3;
	printf("\n  A somas de %d + %d + %d = %d\n",num1,num2,num3,result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

