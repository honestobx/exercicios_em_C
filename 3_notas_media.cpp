//Fa�a um programa que leia as 3 notas de um aluno e calcule a m�dia aritm�tica deste aluno.

#include<stdio.h> 		//Biblioteca padr�o C
#include<stdlib.h>		//Outra biblioteca padr�o C
#include<locale.h>		//Bilbioteca para linguagem local

main()
{
	float nota1,nota2,nota3,media;
	setlocale(LC_ALL,"");
	
	printf("\n Entra com a primeira nota: ");
	scanf("%f", &nota1);
	printf("\n Entre com a segunda nota: ");
	scanf("%f", &nota2);
	printf("\n Entre com a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	printf("\n A m�dia do aluno foi %.1f",media);
	
}
