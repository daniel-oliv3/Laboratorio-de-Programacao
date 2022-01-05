#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Leia um valor de comprimento em centimetros e apresente-o convertido em polegadas.
A formula de conversao e: P = C/2.54; sendo C o comprimento em centimetros e P o
comprimento em polegadas.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float p, c;
	printf("\n  Digite o valor do comprimento em centimetros: ");
	scanf("%f",&c);
	system("cls");
	p=c/2.54;
	printf("\n  O comprimento em polegadas é: %.2f\n",p);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

