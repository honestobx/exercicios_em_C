//Dado um n�mero inteiro, imprima o seu quadrado.

#include<stdio.h> 		//Biblioteca padr�o C
#include<stdlib.h>		//Outra biblioteca padr�o C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	int num;
	setlocale(LC_ALL,"");		//Utilizamos a fun��o setlocale() para fazer a adapta��o do programa ao idioma local da m�quina
	
	printf("\n Entre com um n�mero: ");
	scanf("%d", &num);
	
	num = num*num;
	
	printf("\n O quadrado do n�mero dado � %d", num);
}
