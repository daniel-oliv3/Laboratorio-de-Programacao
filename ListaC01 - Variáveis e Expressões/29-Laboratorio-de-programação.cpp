#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 29. Leia quatro notas, calcule a m�dia aritm�tica e imprima o resultado.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float nota1, nota2, nota3, nota4, media;
	printf("\n  Digite a 1� nota: ");
	scanf("%f",&nota1);
	printf("  Digite a 2� nota: ");
	scanf("%f",&nota2);
	printf("  Digite a 3� nota: ");
	scanf("%f",&nota3);
	printf("  Digite a 4� nota: ");
	scanf("%f",&nota4);
	system("cls");
	media=(nota1+nota2+nota3+nota4)/4;
	printf("\n  A m�dia aritm�tica �: %.2f\n\n",media);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

