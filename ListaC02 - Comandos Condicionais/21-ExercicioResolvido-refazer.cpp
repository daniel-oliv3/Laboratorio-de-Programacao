#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 21. Escreva o menu de opcoes abaixo. Leia a opcao do usuario e execute a operacao escolhida.
Escreva uma mensagem de erro se a opcao for invalida.
Escolha a opçao:
1- Soma de 2 numeros.
2- Diferenca entre 2 numeros (maior pelo menor).
3- Produto entre 2 numeros.
4- Divisao entre 2 numeros (o denominador nao pode ser zero).
Opcao;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int op, num1, num2;
	do{
		printf("\n  1 - Soma de 2 números\n  2 - Diferença entre 2 números (maior pelo menor)\n  3 - Produto entre 2 números\n  4 - Divisão entre 2 números (o denominador não pode ser zero)\n\n");
		printf("  Opção: ");
		scanf("%d",&op);
		system("cls");
		if(op==1){
			printf("\n  Digite o 1º número: ");
			scanf("%d",&num1);
			printf("\n  Digite o 2º número: ");
			scanf("%d",&num2);
			printf("\n  A soma de %d + %d = %d\n",num1,num2,num1+num2);
		}else{
			if(op==2){
				printf("\n  Digite o 1º número: ");
				scanf("%d",&num1);
				printf("\n  Digite o 2º número: ");
				scanf("%d",&num2);
				if(num1>num2)
					printf(" %d %d\n",num1,num2);
				else
					printf(" %d %d\n",num2,num1);	
			}else{
				if(op==3){
					
				}
			}
		}
	}while(op!=0);
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

