//Dado um número inteiro, imprima o seu quadrado.

#include<stdio.h> 		//Biblioteca padrão C
#include<stdlib.h>		//Outra biblioteca padrão C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	int num;
	setlocale(LC_ALL,"");		//Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma local da máquina
	
	printf("\n Entre com um número: ");
	scanf("%d", &num);
	
	num = num*num;
	
	printf("\n O quadrado do número dado é %d", num);
}
