//A rede Casas Bahia lan�a todo m�s de dezembro a promo��o 
//�Compre hoje e passe um ano pagando�, que consiste em parcelar 
//a compra em 12x sem juros. Fa�a um programa que receba um valor 
//de uma compra e mostre o valor das presta��es

#include<stdio.h> 		//Biblioteca padr�o C
#include<stdlib.h>		//Outra biblioteca padr�o C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	float valor,parcela;
	setlocale(LC_ALL,"");
	
	printf("\n Entre com o valor a ser dividido em 12x: ");
	scanf("%f", valor);
	
	parcela = valor/12;
	
	printf("\n Valor de %.2f ser� pago em 12 parcelas de %.2f",valor,parcela);
}
