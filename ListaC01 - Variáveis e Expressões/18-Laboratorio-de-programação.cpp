#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 18. Leia um valor de volume em metros c�bicos m3 e apresente-o convertido em litros. A
f�rmula de convers�o �: L = 1000 * M, sendo L o volume em litros e M o volume em
metros c�bicos.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float L, M;
	printf("\n  Digite um valor de volume em metros c�bicos(m�): ");
	scanf("%f",&M);
	system("cls");
	L=1000*M;
	printf("\n  A convers�o de metros c�bicos em litros �: %.2f\n\n",L);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

