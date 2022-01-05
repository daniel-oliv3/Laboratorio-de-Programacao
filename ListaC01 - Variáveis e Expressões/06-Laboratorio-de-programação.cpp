#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 6 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A formula de conversao  e: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float celsius, fahrenheit;
	printf("\n  Digite uma temperatura em graus celsius: ");
	scanf("%f",&celsius);
	fahrenheit=celsius*(9.0/5.0)+32.0;
	system("cls");
	printf("\n  Conversão de graus celsius para graus fahrenheit\n",fahrenheit);
	printf("\n    Celsius %.1f\n    Fahrenheit %.1f\n\n",celsius,fahrenheit);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

