#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define PI 3.14

/*Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao
´ e: G = R  180=, sendo G o angulo em graus e R em radianos e  = 3:14. ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float G, R;
	printf("\n  Digite um ângulo em graus radianos: ");
	scanf("%f",&R);
	G=R*180/PI;
	system("cls");
	printf("\n  A conversão de radianos para graus é: %.2f\n\n",G);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

