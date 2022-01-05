#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A formula
de conversao e: K = L* 0,45; sendo K a massa em quilogramas e L a massa em libras.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float K, L;
	printf("\n  Digite um valor de massa em libra: ");
	scanf("%f",&L);
	system("cls");
	K=L*0.45;
	printf("\n  A conversão de libras para quilogramas é: %.2f\n\n",K);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

