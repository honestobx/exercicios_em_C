//O app iFood est� oferecendo 5% de desconto para todos os usu�rios. 
//Fa�a um programa que possa receber um valor de um pedido e que 
//escreva o desconto e o valor a pagar.

#include<stdio.h> 		//Biblioteca padr�o C
#include<stdlib.h>		//Outra biblioteca padr�o C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	float valor,desconto;		//Uma vari�vel para o valor e outrapara o desconto
	setlocale(LC_ALL,"");		//Utilizamos a fun��o setlocale() para fazer a adapta��o do programa ao idioma local da m�quina
		
	printf("\n Entre com valor do pedido: ");
	scanf("%f", &valor);
	
	desconto = valor*0.05;
	valor = valor-desconto;
	
	printf("\n Desconto de %.2f", desconto);
	printf("\n Valor a pagar com desconto de 5%% � %.2f", valor);
}
