#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 13. Faca uma funcao que receba dois valores numericos e um s�mbolo. Este s�mbolo representar
a a operacao que se deseja efetuar com os numeros. Se o s�mbolo for + dever a
ser realizada uma adicao, se for - uma subtracao, se for / uma divisao e se for * sera
efetuada uma multiplicacao.

CONSUMO (Km/l) MENSAGEM
menor que 8 Venda o carro!
entre 8 e 14 Econ�omico!
maior que 12 Super econ�omico!
14.;*/

void menuOperacao(int num1, int num2, char ch);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero1, numero2;
	char ch;

	printf("\n  Informe a opera��o desejada\n");
	printf("  + Soma\n");
	printf("  - Subtra��o\n");
	printf("  * Multiplica��o\n");
	printf("  / Divis�o\n\n");
	printf("  Operador: ");
	scanf("%c",&ch);
	
	printf("  Digite o 1� n�mero: ");
	scanf("%d",&numero1);
	printf("  Digite o 2� n�mero: ");
	scanf("%d",&numero2);
	system("cls");
	menuOperacao(numero1, numero2, ch);
	system("Pause");
	return 0;
}

void menuOperacao(int numero1, int numero2, char ch){
	switch(ch){
		case '+':
			printf("\n  %d + %d = %d\n",numero1,numero2,numero1+numero2);
			break;
		case '-':
			printf("\n  %d - %d = %d\n",numero1,numero2,numero1-numero2);
			break;
		case '*':
			printf("\n  %d * %d = %d\n",numero1,numero2,numero1*numero2);
			break;
		case '/':
			printf("\n  %d / %d = %d\n",numero1,numero2,numero1/numero2);
			break;			
	}
	return ;
	
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

