#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 9. Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
contrario imprima: Emprestimo concedido.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario, prestacao, percentual;
	printf("\n  Digite o seu sal�rio: ");
	scanf("%f",&salario);
	printf("  Digite o valor da presta��o do emprestimo: ");
	scanf("%f",&prestacao);
	system("cls");
	percentual=(prestacao/salario)*100;
	printf("  A presta��o corresponde a %.2f%% do sal�rio!\n",percentual);
	if(percentual>20.0)
		printf("\n  Emprestimo n�o pode ser concedido!!!\n\a");
	else
		printf("\n  Emprestimo concedido!\n");
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

