#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3. Pe�a ao us�ario para digitar tr�s valores inteiros e imprima a soma deles.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero1, numero2, numero3, soma=0;
	putchar('\n');
	printf("  Digite o 1� n�mero inteiro: ");
	scanf("%d",&numero1);
	printf("  Digite o 2� n�mero inteiro: ");
	scanf("%d",&numero2);
	printf("  Digite o 3� n�mero inteiro: ");
	scanf("%d",&numero3);
	soma=(numero1+numero2+numero3);
	system("cls");
	putchar('\n');
	printf("  A soma de %d + %d + %d = %d\n",numero1,numero2,numero3,soma);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/
