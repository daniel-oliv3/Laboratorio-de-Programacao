#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em
metros cúbicos.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float L, M;
	printf("\n  Digite um valor de volume em metros cúbicos(m³): ");
	scanf("%f",&M);
	system("cls");
	L=1000*M;
	printf("\n  A conversão de metros cúbicos em litros é: %.2f\n\n",L);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

