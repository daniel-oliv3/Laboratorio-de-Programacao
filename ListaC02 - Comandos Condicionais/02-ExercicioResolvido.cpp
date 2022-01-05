#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 02 - Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
numero e invalido;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	float raiz;
	printf("  Digite um número: ");
	scanf("%d",&numero);
	if(numero>0){
		raiz=sqrt(numero);
		printf("  A raiz quadrada de %d é: %.2f\n",numero,raiz);
	}else{
		if(numero<0){
			printf("  Número e ínvalido\a\n");
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

