#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3. Faca uma funcao para verificar se um numero e positivo ou negativo. Sendo que o valor
de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0.;*/

int verificar(int num){
	if(num==0)
		return 0;
	if(num<0)
		return -1;
	else
		return 1;
			
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, op;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	system("cls");
	op=verificar(numero);
	switch(op){
		case 1:
			printf("\n  O número %d é positivo!\n",numero);
			break;
		case -1:
			printf("\n  O número %d é negativo!\a\n",numero);
			break;
		case 0:
			printf("\n  O número %d é igual a 0!\n",numero);
			break;	
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

