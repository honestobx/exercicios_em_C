//Todos os produtos do site AliExpress s�o apresentados em d�lar. 
//Fa�a o programa que calcule o valor correspondente em Reais, 
//a partir da cota��o do d�lar do dia fornecido pelo usu�rio.


#include<stdio.h> 		//Biblioteca padr�o C
#include<stdlib.h>		//Outra biblioteca padr�o C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	float valor,cota;
	setlocale(LC_ALL,"");
	
	printf("\n Entre com cota��o do d�lar do dia de hoje: ");
	scanf("%f", &cota);
	
	printf("\n Valor em d�lares do produto: ");
	scanf("%f", &valor);
	
	valor = valor*cota;
	
	printf("\n Valor do produto em reais ser� de R$%.2f", valor);
}
