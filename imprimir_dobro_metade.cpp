//Dado um n�mero, imprima o seu dobro e a sua metade.

#include<stdio.h> 		//Biblioteca padr�o C
#include<stdlib.h>		//Outra biblioteca padr�o C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	int num,dobro,metade;		//poderia ser feito com menos v�riaveis
	setlocale(LC_ALL,"");		//Utilizamos a fun��o setlocale() para fazer a adapta��o do programa ao idioma local da m�quina
	
	printf("\n Entre com um n�mero: ");
	scanf("%d", &num);
	
	dobro = num*2;
	metade = num/2;
	
	printf("\n O dobro do n�mero dado � %d e sua metade � %d",dobro,metade);
	
}
