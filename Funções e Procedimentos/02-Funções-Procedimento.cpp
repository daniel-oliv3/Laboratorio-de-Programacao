#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 2. Faca uma funcao que receba a data atual (dia, mes e ano em inteiro) e exiba-a na tela
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
2000.;*/

int dataAtual(int dia, int mes, int ano){
	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int dia, ano, mes;
	printf("\n  Digite o dia: ");
	scanf("%d",&dia);
	printf("  Digite o mês: ");
	scanf("%d",&mes);
	printf("  Digite o ano: ");
	scanf("%d",&ano);
	novaDATA=dataAtual(dia, mes, ano);
	system("cls");
	printf("\n  Data: %d//%d//%d é: %d\n",novaDATA);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

