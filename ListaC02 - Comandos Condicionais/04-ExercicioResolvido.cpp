#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 4 Fa�a um programa que leia um n�mero e, se caso ele for positivo, calcule e mostre:
* o numero digitado ao quadrado
* a raiz quadrada do numero digitado.
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero, raiz;
	printf("\n  Digite um n�mero real: ");
	scanf("%f",&numero);
	if(numero>0){
		raiz=sqrt(numero);
		printf("\n  A raiz quadrada de %.1f �: %.1f\n",numero,raiz);
		printf("  O quadrado de %.1f �: %.1f\n",numero,numero*numero);
	}else{
		if(numero<0){
			printf("  N�mero �nvalido!\a\n");
		}
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

