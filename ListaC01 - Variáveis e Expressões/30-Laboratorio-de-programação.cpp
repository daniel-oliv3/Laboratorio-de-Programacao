#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente
em dólares.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float dolar, real, cotacao;
	printf("\n  Digite um valor em dolares: ");
	scanf("%f",&dolar);
	printf("  Digite a cotação do dolara atual: ");
	scanf("%f",&cotacao);  //3,25
	real=dolar*cotacao;
	system("cls");
	printf("\n  O valor em reais é R$: %.2f\n\n",real);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

