#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 28. Fa�a a leitura de tr�s valores e apresente como resultado a soma dos quadrados dos
tr�s valores lidos.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, num3, q1, q2, q3;
	printf("\n  Digite o 1� n�mero inteiro: ");
	scanf("%d",&num1);
	printf("  Digite o 2� n�mero inteiro: ");
	scanf("%d",&num2);
	printf("  Digite o 3� n�mero inteiro: ");
	scanf("%d",&num3);
	system("cls");
	q1=num1*num1;
	q2=num2*num2;
	q3=num3*num3;
	printf("\n  O quadrado de %d �: %d\n",num1,q1);
	printf("  O quadrado de %d �: %d\n",num2,q2);
	printf("  O quadrado de %d �: %d\n",num3,q3);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

