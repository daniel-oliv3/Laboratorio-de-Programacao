#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 19. Leia um valor de volume em litros e apresente-o convertido em metros cubicos m3. A
formula de conversao e: M = L/1000 , sendo L o volume em litros e M o volume em metros
cubicos.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float m, l;
	printf("\n  Digite o valor de volume em litros: ");
	scanf("%f",&l);
	system("cls");
	m=l/1000;
	printf("\n  A conversão de %.2f litros em metros cubicos é: %.2f\n\n",l,m);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

