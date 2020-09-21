//exercicio de testes 1
//Dado um número inteiro, imprima o seu quadrado

#include<stdio.h> //inclusão de bibliotecas

main() //sempre vai ter a função main antes de tudo
{
	int num,resultado;  //declaração de variáveis
	printf("\n Entre com o numero:  "); //função que permite entrada de dados do programa
	scanf("%d", &num);                  //função que permite entrada de dados do programa
	resultado = num*num;
	printf("\n O quadrado do numero dado: %.1d", resultado);
	
}
