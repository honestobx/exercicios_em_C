//Um Programa que receba o preço de custo de um produto
//e mostre o valor de venda. Sabe-se que será acrescido um
//um percentual informado pelo usuário sobre o preço de custo.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float valorCusto,valorVenda,valorPercentual;
	setlocale(LC_ALL,"");
	
	printf("\n Entre com valor de custo do produto: ");
	scanf("%f",&valorCusto);
	printf("\n Entre com valor com a porcentagem de acréscimo: ");
	scanf("%f",&valorPercentual);
	
	valorPercentual = valorCusto*valorPercentual;
	valorVenda = valorCusto+valorPercentual;
	
	printf("\n O valor de venda do produto será R$%.2f", valorVenda);	
}
