//exercicio de testes 1
//Dado um n�mero inteiro, imprima o seu quadrado

#include<stdio.h> //inclus�o de bibliotecas

main() //sempre vai ter a fun��o main antes de tudo
{
	int num,resultado;  //declara��o de vari�veis
	printf("\n Entre com o numero:  "); //fun��o que permite entrada de dados do programa
	scanf("%d", &num);                  //fun��o que permite entrada de dados do programa
	resultado = num*num;
	printf("\n O quadrado do numero dado: %.1d", resultado);
	
}
