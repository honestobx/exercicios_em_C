//Um Programa que receba o pre�o de custo de um produto
//e mostre o valor de venda. Sabe-se que ser� acrescido um
//um percentual informado pelo usu�rio sobre o pre�o de custo.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float valorCusto,valorVenda,valorPercentual;
	setlocale(LC_ALL,"");
	
	printf("\n Entre com valor de custo do produto: ");
	scanf("%f",&valorCusto);
	printf("\n Entre com valor com a porcentagem de acr�scimo: ");
	scanf("%f",&valorPercentual);
	
	valorPercentual = valorCusto*valorPercentual;
	valorVenda = valorCusto+valorPercentual;
	
	printf("\n O valor de venda do produto ser� R$%.2f", valorVenda);	
}
