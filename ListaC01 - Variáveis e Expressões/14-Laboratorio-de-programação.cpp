#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define p 3.14

/*14. Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao
 e: R = G * pi/180, sendo G o angulo em graus e R em radianos e pi = 3.14.

 pi = 3.14159265359;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float g, r;
	printf("\n  Digite um ângulo em graus: ");
	scanf("%f",&g);
	r=g*p/180;
	system("cls");
	printf("\n  A conversão de ângulo em graus para radianos é\n\n");
	printf("    Ângulos em Graus: %.2f\n    Radianos: %.2f\n\n",g,r);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

