//Dado um número, imprima o seu dobro e a sua metade.

#include<stdio.h> 		//Biblioteca padrão C
#include<stdlib.h>		//Outra biblioteca padrão C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	int num,dobro,metade;		//poderia ser feito com menos váriaveis
	setlocale(LC_ALL,"");		//Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma local da máquina
	
	printf("\n Entre com um número: ");
	scanf("%d", &num);
	
	dobro = num*2;
	metade = num/2;
	
	printf("\n O dobro do número dado é %d e sua metade é %d",dobro,metade);
	
}
