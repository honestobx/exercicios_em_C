//Todos os produtos do site AliExpress são apresentados em dólar. 
//Faça o programa que calcule o valor correspondente em Reais, 
//a partir da cotação do dólar do dia fornecido pelo usuário.


#include<stdio.h> 		//Biblioteca padrão C
#include<stdlib.h>		//Outra biblioteca padrão C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	float valor,cota;
	setlocale(LC_ALL,"");
	
	printf("\n Entre com cotação do dólar do dia de hoje: ");
	scanf("%f", &cota);
	
	printf("\n Valor em dólares do produto: ");
	scanf("%f", &valor);
	
	valor = valor*cota;
	
	printf("\n Valor do produto em reais será de R$%.2f", valor);
}
