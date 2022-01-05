#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 10 - Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde h corresponde a altura):
 Homens: (72.7 * h) - 58
 Mulheres: (62, 1 * h) - 44, 7 ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float altura, peso;
	char sexo;
	printf("  Digite sua altura: ");
	scanf("%f",&altura);
	fflush(stdin);
	printf("  Digite o seu sexo <m/f>: ");
	scanf("%c",&sexo);
	if(sexo == 'M' || sexo == 'm'){
		peso=(72.7*altura)-58;
	}else{
		if(sexo == 'F' || sexo == 'f'){
			peso=(62.1*altura)-44.7;
		}
	}
	fflush(stdin);
	system("cls");
	printf("\n  Sexo: %c\n",sexo);
	printf("  Peso ideal: %.2f\n",peso);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

