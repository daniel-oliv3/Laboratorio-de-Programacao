#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 3

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	float media, array[tam];
	putchar('\n');
	for(i=0; i<tam; i++){
		printf("  Digie o %dº número: ",i+1);
		scanf("%f",&array[i]);
	}
	for(i=0; i<tam; i++){
		media=media+array[i]/tam;
	}
	printf("\n  A média Aritmetica é: %.2f\n",media);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

