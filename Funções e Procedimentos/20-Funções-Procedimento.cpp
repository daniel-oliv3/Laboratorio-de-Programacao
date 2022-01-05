#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 20 - Faca um algoritmo que receba um numero inteiro positivo n e calcule o seu fatorial, n!.;*/

int funcaoFatorial(int num){
	int fat=1;
	for( ; num>=1; --num){
		fat*=num;
	}
	return fat;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, fatorial;
	printf("\n  PROGRAMA FATORIAL\n");
	printf("  Digite um número: ");
	scanf("%d",&numero);
	system("cls");
	fatorial=funcaoFatorial(numero);
	printf("\n  O fatorial de %d é: %d!\n",numero,fatorial);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

