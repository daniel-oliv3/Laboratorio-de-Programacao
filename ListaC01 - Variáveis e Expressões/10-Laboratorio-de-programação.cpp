#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 10 - Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s
(metros por segundo). A formula de conversao e: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float k, m;
	printf("\n  Digite uma velocidade em km/h: ");
	scanf("%f",&k);
	m=k/3.6;
	system("cls");
	printf("\n  A conversão de km/h para m/s é:\n\n");
	printf("    km/h (quilometros por hora): %.2f\n",k);
	printf("    m/s (metros por segundo): %.2f\n",m);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

