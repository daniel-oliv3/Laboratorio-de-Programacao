#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 11 - Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A formula de conversao e: K = M * 3.6, sendo K a velocidade
em km/h e M em m/s.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float k, m;
	printf("\n  Digite uma velocidade em sm/s: ");
	scanf("%f",&m);
	k=m*3.6;
	system("cls");
	printf("\n  A conversão de m/s para km/h é:\n\n");
	printf("    m/s (metros por segundo): %.2f\n",m);
	printf("    km/h (quilometros por hora): %.2f\n",k);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/
