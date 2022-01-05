#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 9 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
formula de conversao e: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float kelvin, celsius;
	printf("  Digite uma temperatura em graus celsius: ");
	scanf("%f",&celsius);
	kelvin=celsius+273.15;
	system("cls");
	putchar('\n');
	printf("  A conversão de graus celsius para kelvin é\n\n");
	printf("    Celsius: %.2f\n    Kelvin: %.2f\n",celsius,kelvin);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

