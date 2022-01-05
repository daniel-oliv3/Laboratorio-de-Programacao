#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A formula
de conversao e: L = K/0;45, sendo K a massa em quilogramas e L a massa em libras.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float L, K;
	printf("\n  Digite um valor de massa em quilogramas: ");
	scanf("%f",&K);
	system("cls");
	L=K/0.45;
	printf("\n  A conversão em libras é: %.2f\n\n",L);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

