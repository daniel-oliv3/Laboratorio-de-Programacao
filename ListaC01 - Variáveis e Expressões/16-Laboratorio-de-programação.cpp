#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 16 - Leia um valor de comprimento em polegadas e apresente-o convertido em centimetros.
A formula de conversao e: C = P * 2,54, sendo C o comprimento em centimetros e P o
comprimento em polegadas.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float c, p;
	printf("\n  Digite um valor de comprimento em polegadas: ");
	scanf("%f",&p);
	system("cls");
	c=p*2.54;
	printf("\n  O comprimento em centimetros é: %.2f\n",c);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

