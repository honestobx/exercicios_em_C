//Faça um programa que leia uma temperatura em graus Celsius e apresente-a 
//convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5, 
//na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius
//Observação: Para testar se a sua resposta está correta saiba que 100ºC = 212F

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
	
	printf("\n Conversão de Celsius para Fahrenheit: %.1fF", fah);
}
