#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 28 - Faca um programa que leia tres numeros inteiros positivos e efetue o calculo de uma das
seguintes medias de acordo com um valor numerico digitado pelo usuario:;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float num1, num2, num3;
	char op;
	printf("  Escolha o cálculo de uma das seguintes médias:\n  a) Geométrica: \n  b) Ponderada: \n  c) Harmônica: \n  d) Aritmética: \n\n  Opção: ");
	scanf("%c",&op);
	system("cls");
	printf("\n  Digite o 1º número: ");
	scanf("%f",&num1);
	printf("  Digite o 2º número: ");
	scanf("%f",&num2);
	printf("  Digite o 3º número: ");
	scanf("%f",&num3);
	system("cls");
	switch(op){
		case 'a':
			printf("\n  Média Geometrica é: %.2f\n",pow(num1*num2*num3, 1.0/3.0));
			break;
		case 'b':
			printf("\n  Média Ponderada é: %.2f\n",(num1*1+num2*2+num3*3)/(1+2+3));
			break;
		case 'c':
			printf("\n  Média Harmônica é: %.2f\n",(3/((1/num1)+(1/num2)+(1/num3))));
			break;
		case 'd':
			printf("\n  Média Aritmetica: %.2f\n",(num1+num2+num3)/3);				
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

