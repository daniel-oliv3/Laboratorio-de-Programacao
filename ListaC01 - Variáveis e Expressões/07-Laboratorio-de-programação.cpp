#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 07 - Leia uma temperatura em graus fahrenheit e apresente-a convertita para graus celsius
a formula de conversão é: C=5.0*(F-32.0)/9.0; sendo C celsius f fahrenheit*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float fahrenheit, celsius;
	printf("  Digite a temperatura em graus fahrenheit: ");
	scanf("%f",&fahrenheit);
	system("cls");
	putchar('\n');
	celsius=5.0*(fahrenheit-32.0)/9.0;
	printf("  A conversão de fahrenheit para celsius é\n");
	printf("\n    Fahrenheit: %.2f\n    Celsius: %.2f\n",fahrenheit,celsius);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

