#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 01 - Fa�a um programa que receba dois n�meros e mostre qual deles e maior.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1=0, num2=0, maior=0;
	printf("  Digite o 1� n�mero: ");
	scanf("%d",&num1);
	printf("  Digite o 2� n�mero: ");
	scanf("%d",&num2);
	if(num1>num2){
		maior=num1;
	}else{
		if(num1<num2){
			maior=num2;
		}
	}
	system("cls");
	printf("\n  O maior n�mero digitado �: %d\n",maior);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

