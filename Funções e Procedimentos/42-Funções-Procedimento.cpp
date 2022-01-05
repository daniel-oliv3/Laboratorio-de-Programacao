#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 5

/* 42. Faca uma funcao que receba um vetor de reais e retorne a media dele.;*/

float mediaArray(float *v);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float vetor[tam], resp;
	int i;
	printf("\n  Informe %d valores para o array/vetor\n",tam); 
	for(i=0; i<tam; i++){
	printf("  Digite o %dº número: ",i+1);
	scanf("%f",&vetor[i]);
	}
	resp=mediaArray(vetor);
	printf("\n  A média é: %.2f\n",resp);
	system("Pause");
	return 0;
}

float mediaArray(float *v){
	int i;
	float media;
	for(i=0; i<tam; i++){
		media=v[i]+v[i]/tam;
	}
	return media;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

