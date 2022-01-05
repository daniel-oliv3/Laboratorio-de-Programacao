#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,
assim como a diferenca existente entre ambos. ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	printf("\n  Digite o 1º número: ");
	scanf("%d",&num1);
	printf("  Digite o 2º número: ");
	scanf("%d",&num2);
	system("cls");
	if(num1>num2){
		printf("\n  O maior número é: %d\n",num1);
	}else{
		if(num2>num1){
			printf("\n  O maior número é: %d\n",num2);
		}
	}
	printf("  Os Números digitados foram %d e o número %d\n",num1,num2);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

