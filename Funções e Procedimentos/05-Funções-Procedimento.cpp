#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*5 Faca uma funcao e um programa de teste para o calculo do volume de uma esfera.
Sendo que o raio e passado por parametro.
V=4/(3*3.14)*R*3;*/

double volume(int raio);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float raio, resp;
	printf("\n  Digite o raio da esfera: ");
	scanf("%f",&raio);
	system("cls");
	resp=volume(raio);
	printf("\n  O volume é: %.2f\n",resp);
	system("Pause");
	return 0;
}

double volume(int raio){
	double v;
	return v=4/(3*3.14)*raio*3;
}

/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

