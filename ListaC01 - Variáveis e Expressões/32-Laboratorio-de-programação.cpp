#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 32. Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
seu dobro.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num, sucTriplo, antDobro;
	printf("\n  Digite um n�mero inteiro: ");
	scanf("%d",&num);
	system("cls");
	sucTriplo=(num*3)+1;
	antDobro=(num*2)-1;
	printf("\n  O triplo de %d �: %d\n",num,sucTriplo);
	printf("  O dobro de %d �: %d\n",num,antDobro);
	printf("  A soma � %d + %d = %d\n",sucTriplo,antDobro,(sucTriplo+antDobro));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

