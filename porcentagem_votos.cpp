//Escreva um programa para ler o número total de eleitores de um município, 
//o número de votos brancos, nulos e válidos. Calcular e escrever o percentual 
//que cada um representa em relação ao total de eleitores.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	float total,nulos,brancos,validos;
	setlocale(LC_ALL,"");
	
	printf("\n Entre com numero total de eleitores: ");
	scanf("%f", &total);
	printf("\n Entre com numero de votos brancos: ");
	scanf("%f", &brancos);
	printf("\n Entre com numero de votos nulos: ");
	scanf("%f", &nulos);
	printf("\n Entre com numero de votos validos: ");
	scanf("%f", &validos);
	
	validos = (validos/100)*total;
	brancos = (brancos/100)*total;
	nulos = (nulos/100)*total;
	
	printf("\n Porcentagem de votos validos %.1f ",validos);
	printf("\n Porcentagem de votos nulos %.1f ",nulos);	
	printf("\n Porcentagem de votos brancos %.1f ",brancos);
	printf("\n De um total de %.1f ",total);
	
	
}
