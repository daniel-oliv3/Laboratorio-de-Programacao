#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 17. Faca um programa que calcule e mostre a area de um trapezio. Sabe-se que:
A=(basemaior + basemenor) * altura/2; */


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float baseMaior, baseMenor, altura, area;
	printf("\n  Digite a base maior: ");
	scanf("%f",&baseMaior);
	printf("  Digite a base menor: ");
	scanf("%f",&baseMenor);
	printf("  Digite a altura: ");
	scanf("%f",&altura);
	system("cls");
	area=((baseMaior+baseMenor)*altura)/2;
	printf("\n  A area do trapezio é: %.2f\n",area);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

