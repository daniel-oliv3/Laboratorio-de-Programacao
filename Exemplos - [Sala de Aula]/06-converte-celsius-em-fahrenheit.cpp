#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 06 Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. a formula de convensão e 
F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float C, F;
	printf("  Digite uma temperatura em graus Celsius: ");
	scanf("%f",&C);
	F = C * (9.0/5.0) + 32.0;
	system("cls");
	printf("\n  A conversão de graus celsius para fahrenheit é: %.2f\n",F);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

