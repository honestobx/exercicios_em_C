//A rede Casas Bahia lança todo mês de dezembro a promoção 
//“Compre hoje e passe um ano pagando”, que consiste em parcelar 
//a compra em 12x sem juros. Faça um programa que receba um valor 
//de uma compra e mostre o valor das prestações

#include<stdio.h> 		//Biblioteca padrão C
#include<stdlib.h>		//Outra biblioteca padrão C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	float valor,parcela;
	setlocale(LC_ALL,"");
	
	printf("\n Entre com o valor a ser dividido em 12x: ");
	scanf("%f", valor);
	
	parcela = valor/12;
	
	printf("\n Valor de %.2f será pago em 12 parcelas de %.2f",valor,parcela);
}
