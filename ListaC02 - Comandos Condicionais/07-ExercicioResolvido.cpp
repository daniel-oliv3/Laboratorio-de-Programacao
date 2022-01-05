#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*7 -  Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os dois
numeros forem iguais, imprima a mensagem Numeros iguais.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, maior;
	printf("\n  Digite o 1º número: ");
	scanf("%d",&num1);
	printf("  Digite o 2º número: ");
	scanf("%d",&num2);
	system("cls");
	if(num1>num2){
		maior=num1;
	}else{
		if(num1<num2){
			maior=num2;
		}else{
			if(num1 == num2){
				printf("\n  Os números %d e %d são iguais!\a\n",num1,num2);
			}
		}
	}
	printf("\n  O maior número é: %d\n\n",maior);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

