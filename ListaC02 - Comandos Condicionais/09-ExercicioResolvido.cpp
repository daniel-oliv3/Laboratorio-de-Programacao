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
	printf("\n  Digite o seu salário: ");
	scanf("%f",&salario);
	printf("  Digite o valor da prestação do emprestimo: ");
	scanf("%f",&prestacao);
	system("cls");
	percentual=(prestacao/salario)*100;
	printf("  A prestação corresponde a %.2f%% do salário!\n",percentual);
	if(percentual>20.0)
		printf("\n  Emprestimo não pode ser concedido!!!\n\a");
	else
		printf("\n  Emprestimo concedido!\n");
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

