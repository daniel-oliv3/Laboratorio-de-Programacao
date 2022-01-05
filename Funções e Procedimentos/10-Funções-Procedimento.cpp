#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 10. Faca uma funcao que receba dois numeros e retorne qual deles e o maior.;*/

int maiorNumero(int num1, int num2){
	int aux;
	if(num1>num2)
		return num1;
	else
		return num2;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, maior;
	printf("\n  Digite o 1º número inteiro: ");
	scanf("%d",&num1);
	printf("  Digite o 2º número inteiro: ");
	scanf("%d",&num2);
	system("cls");
	maior=maiorNumero(num1, num2);
	printf("\n  O maior número é: %d\n",maior);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

