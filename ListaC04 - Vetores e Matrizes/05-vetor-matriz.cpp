#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

/* 5. Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, cont_pares=0, cont_impares=0, vet[TAM];
	printf("\nPreencha o array com %d elementos inteiro\n",TAM);
	for(i=0; i<TAM; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%d",&vet[i]);
	}
	system("cls");
	for(i=0; i<TAM; i++){
		if(vet[i]%2==0)
			cont_pares++;
		else
			cont_impares++;	
	}
	printf("\n  O total de números pares no Array[%d] é\n",TAM);
	printf("  Pares: %d\n",cont_pares);
	//printf("  ímpares: %d\n",cont_impares);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

