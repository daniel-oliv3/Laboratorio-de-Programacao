#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 06 Leia uma temperatura em graus fahrenheit e apresente-a convertida em graus celsius. a formula de convens�o e 
C = 5.0 * (F-32.0)/9.0, sendo C a temperatura em celsius e F a temperatura em fahrenheit;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float C, F;
	printf("  Digite uma temperatura em graus fahrenheit: ");
	scanf("%f",&F);
	C = 5.0 * (F-32.0)/9.0
	system("cls");
	printf("\n  A convers�o de graus fahrenheit para celsius �: %.2f\n",F);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

