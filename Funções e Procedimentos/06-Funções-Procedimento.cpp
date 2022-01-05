#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faca uma funcao que receba 3 numeros inteiros como parametro, representando horas,
minutos e segundos, e os converta em segundos.;*/

int Conversao(int num1, int num2, int num3){
	int resp;
	resp=(num1*3600)+(num2*60)+num3;
	return resp;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int hora, minuto, segundo;
	printf("\n  Digite a hora: ");
	scanf("%d",&hora);
	printf("  Digite o minuto: ");
	scanf("%d",&minuto);
	printf("  Digite o segundo: ");
	scanf("%d",&segundo);
	system("cls");
	printf("\n  A conversão é: %d segundos\n",Conversao(hora, minuto, segundo));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

