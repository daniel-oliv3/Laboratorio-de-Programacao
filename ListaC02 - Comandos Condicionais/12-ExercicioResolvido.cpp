#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*12  Ler um numero inteiro. Se o numero lido for negativo, escreva a mensagem “Numero
inválido”. Se o numero for positivo, calcular o logaritmo deste numero. ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float numero;
	printf("\n  Digite um número: ");
	scanf("%f",&numero);
	system("cls");
	if(numero < 0){
		printf("\n  Número inválido!\n\a");
	}else{
		printf("\n  O logaritmo de %.2f é: %.2f\n",numero,log(numero));
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

