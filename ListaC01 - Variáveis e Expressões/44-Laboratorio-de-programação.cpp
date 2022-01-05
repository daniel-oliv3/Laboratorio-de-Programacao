#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 44. Receba a altura do degrau de uma escada e a altura que o usuario deseja alcancar
subindo a escada. Calcule e mostre quantos degraus o usuario dever ´a subir para atingir
seu objetivo.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float degrau, altura_escada, result;
	printf("\n  Digite a altura do degrau de uma escada: ");
	scanf("%f",&degrau);
	printf("  Digite a altura desejada para subir a escada: ");
	scanf("%f",&altura_escada);
	result=(altura_escada*100)/degrau;
	system("cls");
	printf("\n  A quantidade de degraus é: %.2f\n",result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

