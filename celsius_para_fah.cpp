//Fa�a um programa que leia uma temperatura em graus Celsius e apresente-a 
//convertida em graus Fahrenheit. A f�rmula de convers�o �: F = (9 * C + 160) / 5, 
//na qual F � a temperatura em Fahrenheit e C � a temperatura em Celsius
//Observa��o: Para testar se a sua resposta est� correta saiba que 100�C = 212F

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float cel,fah;
	setlocale(LC_ALL,"");
	
	printf("\n Entre com a temperatura em Celsius: ");
	scanf("%f", &cel);
	
	fah = (9 * cel + 160)/5;
	
	printf("\n Convers�o de Celsius para Fahrenheit: %.1fF", fah);
}
