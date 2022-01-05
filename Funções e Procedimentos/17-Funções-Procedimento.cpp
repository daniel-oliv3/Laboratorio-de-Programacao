#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a
soma dos N numeros inteiros existentes entre eles.;*/

int somaNumeros(int num1, int num2){
	return num1+num2;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero1, numero2, soma;
	printf("\n  Digite o 1º número inteiro: ");
	scanf("%d",&numero1);
	printf("  Digite o 2º número inteiro: ");
	scanf("%d",&numero2);
	system("cls");
	soma=somaNumeros(numero1, numero2);
	printf("\n  A soma de %d + %d = %d\n",numero1,numero2,soma);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

