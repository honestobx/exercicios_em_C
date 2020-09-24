//O app iFood está oferecendo 5% de desconto para todos os usuários. 
//Faça um programa que possa receber um valor de um pedido e que 
//escreva o desconto e o valor a pagar.

#include<stdio.h> 		//Biblioteca padrão C
#include<stdlib.h>		//Outra biblioteca padrão C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	float valor,desconto;		//Uma variável para o valor e outrapara o desconto
	setlocale(LC_ALL,"");		//Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma local da máquina
		
	printf("\n Entre com valor do pedido: ");
	scanf("%f", &valor);
	
	desconto = valor*0.05;
	valor = valor-desconto;
	
	printf("\n Desconto de %.2f", desconto);
	printf("\n Valor a pagar com desconto de 5%% é %.2f", valor);
}
