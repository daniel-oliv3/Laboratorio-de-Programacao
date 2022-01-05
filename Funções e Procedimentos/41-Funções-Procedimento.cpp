#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 41. Faca uma funcao que receba um vetor de inteiros e retorne o maior valor;*/

int maiorNumero(int num1, int num2){
	if(num1>num2)
		return num1;
	else
		return num2;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero1, numero2, maior;
	printf("\n  Digite o 1º numero inteiro: ");
	scanf("%d",&numero1);
	printf("  Digite o 2º número inteiro: ");
	scanf("%d",&numero2);
	system("cls");
	maior=maiorNumero(numero1, numero2);
	printf("\n  O maior número digitado é: %d\n",maior);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

