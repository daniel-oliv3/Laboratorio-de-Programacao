#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 3 - Leia um número real. se o numero for positivo imprima a raiz quadrada,
do contrario imprima o numero ao quadrado;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero, raiz;
	printf("  Digite um número real: ");
	scanf("%f",&numero);
	if(numero>0){
		raiz=sqrt(numero);
		printf("  A raiz quadrada de %.1f é: %.1f\n",numero,raiz);
	}else{
		if(numero<0){
			printf("  O quadrado de %.1f é: %.1f\n",numero,numero*numero);
		}
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

