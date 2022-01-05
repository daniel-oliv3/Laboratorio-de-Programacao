#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 8 - Faca um programa que leia 2 notas de um aluno, verifique se as notas sao validas e
exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser
informado ao usuario e o programa termina;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float nota1, nota2, media;
	printf("\n  Digite a 1º nota: ");
	scanf("%f",&nota1);
	printf("  Digite a 2º nota: ");
	scanf("%f",&nota2);
	system("cls");
	if(nota1 > 0 && nota2 > 0){
		media=(nota1+nota2)/2;
		printf("\n  A média é: %.1f\n",media);
	}else{
		printf("\n  Nota ínvalida!\a\n");
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

