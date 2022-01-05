#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 18. Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o
resultado de XZ para o programa principal. Atenção nao utilize nenhuma funcao pronta
de exponenciacao.;*/

long int Potencia(int x, int y){
	unsigned int i, total;
	total=x;
	for(i=1; i<y; i++)
		total=total*x;
	return total;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int base, expoente, result;
	printf("\n  Digite a base: ");
	scanf("%d",&base);	
	printf("  Digite o expoente: ");
	scanf("%d",&expoente);
	system("cls");
	result=Potencia(base, expoente);
	printf("\n  A exponenciação de %d^%d = %d\n",base,expoente,result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

