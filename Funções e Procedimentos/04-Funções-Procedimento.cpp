#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/* 4. Faca uma funcao para verificar se um numero e um quadrado perfeito. Um quadrado
perfeito e um numero inteiro nao negativo que pode ser expresso como o quadrado de
outro numero inteiro. Ex: 1, 4, 9...;*/


int quadradoPerfeito(int num){
	int i, c;
	float b;
	b=sqrt(num);
	c=b;
		if(b<=c)
			return 1;
		else
			return 2;		
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, op;
	printf("\n  Digite um n�mero inteiro: ");
	scanf("%d",&numero);
	system("cls");
	op=quadradoPerfeito(numero);
	switch(op){
		case 1:
			printf("\n  O n�mero %d � um quadrado perfeito!\n",numero);
			printf("  Raiz quadrada de %d �: %.2f\n",numero,sqrt(numero));
			break;
		case 2:
			printf("\n  O n�mero %d n�o � um quadrado perfeito!\n\a",numero);
			break;	
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

