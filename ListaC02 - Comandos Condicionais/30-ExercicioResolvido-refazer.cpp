#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 30. Faca um programa que receba tres numeros e mostre-os em ordem crescente.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, num3,x1, x2, x3;
	printf("\n  Digite o 1º número: ");
	scanf("%d",&num1);
	printf("  Digite o 2º número: ");
	scanf("%d",&num2);
	printf("  Digite o 3º número: ");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		x1=num1;
	}else{
		if(num2>num1 && num2>num3){
			x2=num2;
		}else{
			if(num3>num1 && num3>num2){
				x3=num3;
			}
		}
	}
	printf("  %d %d %d\n",x1,x2,x3);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

