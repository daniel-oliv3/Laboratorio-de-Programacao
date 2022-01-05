#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
Categoria Idade
Infantil A 5 a 7
Infantil B 8 a 10
Juvenil A 11 a 13
Juvenil B 14 a 17
Sênior maiores de 18 anos;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int idade=0;
	printf("\n  Digite idade do nadador: ");
	scanf("%d",&idade);
	system("cls");
	if(idade>=5 && idade<=7){
		printf("\n  Infantil A\n");
	}else{
		if(idade>=8 && idade<=10){
			printf("\n  Infantil B\n");
		}else{
			if(idade>=11 && idade<=13){
				printf("\n  Juvenil A\n");
			}else{
				if(idade>=14 && idade<=17){
					printf("\n  Juvenil B\n");
				}else{
					if(idade>=18){
						printf("\n  Sênior\n");
					}
				}
			}
		}
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

