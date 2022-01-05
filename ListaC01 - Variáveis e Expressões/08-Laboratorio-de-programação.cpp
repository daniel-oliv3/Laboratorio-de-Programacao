#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 8 - Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
formula de conversao e: C = K - 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float kelvin, celsius;
	printf("  Digite uma temperatura em graus kelvin: ");
	scanf("%f",&kelvin);
	celsius=kelvin-273.15;
	system("cls");
	putchar('\n');
	printf("  A conversão de graus kelvin para celsius é\n\n");
	printf("    Kelvin: %.2f\n    Celsius: %.2f\n",kelvin,celsius);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

