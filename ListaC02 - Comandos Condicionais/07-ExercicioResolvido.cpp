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
	printf("\n  Digite o 1� n�mero: ");
	scanf("%d",&num1);
	printf("  Digite o 2� n�mero: ");
	scanf("%d",&num2);
	system("cls");
	if(num1>num2){
		maior=num1;
	}else{
		if(num1<num2){
			maior=num2;
		}else{
			if(num1 == num2){
				printf("\n  Os n�meros %d e %d s�o iguais!\a\n",num1,num2);
			}
		}
	}
	printf("\n  O maior n�mero �: %d\n\n",maior);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

