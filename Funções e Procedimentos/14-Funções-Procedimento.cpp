#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 14 - Faça uma função que receba a distancia em km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela abaixo.
CONSUMO			KM/L	MENSAGEM
menor que 		8		venda o carro
entre		8 e 14		economico
maior que 		12 		super economico
;*/

float ConsumoCarro(float dis, float qtd_litro){
	return dis/qtd_litro;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float distancia, quantidade_litros, result;
	int op;
	printf("\n  Digite a distancia a percorrer: ");
	scanf("%f",&distancia);
	printf("  Digite a quantidade de litros de gasolina: ");
	scanf("%f",&quantidade_litros);
	system("cls");
	result=ConsumoCarro(distancia, quantidade_litros);
	op=(int)result;
	if(op==8){
		printf("\n  Venda o carro!\n");
	}else{
		if(op>8 && result<=14){
			printf("\n  Econômico!\n");
		}else{
			if(op>12){
				printf("\n  Super econômico!\n");
			}
		}
	}
	printf("  Consumo Medio = %6.2f km/litro\n",result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/


/*OBS testes
Tabuada de Dividir do 14.
14 : 1 = 14
28 : 2 = 14
42 : 3 = 14
56 : 4 = 14
70 : 5 = 14
84 : 6 = 14
98 : 7 = 14
112 : 8 = 14
126 : 9 = 14
140 : 10 = 14

 Tabuada de Dividir do 12

12 : 12 = 1
24 : 12 = 2
36 : 12 = 3
48 : 12 = 4
60 : 12 = 5
72 : 12 = 6
84 : 12 = 7
96 : 12 = 8
108 : 12 = 9

 Tabuada de Dividir do 8

8 : 8 = 1
16 : 8 = 2
24 : 8 = 3
32 : 8 = 4
40 : 8 = 5
48 : 8 = 6
56 : 8 = 7
64 : 8 = 8
72 : 8 = 9
*/
