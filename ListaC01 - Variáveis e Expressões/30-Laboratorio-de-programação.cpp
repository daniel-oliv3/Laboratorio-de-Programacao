#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 30. Leia um valor em real e a cota��o do d�lar. Em seguida, imprima o valor correspondente
em d�lares.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float dolar, real, cotacao;
	printf("\n  Digite um valor em dolares: ");
	scanf("%f",&dolar);
	printf("  Digite a cota��o do dolara atual: ");
	scanf("%f",&cotacao);  //3,25
	real=dolar*cotacao;
	system("cls");
	printf("\n  O valor em reais � R$: %.2f\n\n",real);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

