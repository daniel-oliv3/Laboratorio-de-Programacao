#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 3

/* 48. Faca uma funcao que receba uma matriz de 3 x 3 elementos. Calcule a soma dos
elementos que estao acima da diagonal principal.;*/

int somaElementos(int m[tam][tam]){  // função Soma dos elementos acima da diagonal principal;
	int i, j, cSoma;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if (j>i){
				cSoma = cSoma + m[i][j];
			}
		}
	}
	return cSoma;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, matriz[tam][tam], resp;
	putchar('\n');
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("  Digite o %dº número: ",j+1);
			scanf("%i",&matriz[i][j]);
		}
		putchar('\n');
	}
	system("cls");
	resp=somaElementos(matriz);
	printf("\n  A soma dos elementos acima da diagonal principal é: %d\n",resp);	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

