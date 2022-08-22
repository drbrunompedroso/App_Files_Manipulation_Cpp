#include<stdio.h>
#include<conio.h>
#include<string.h>

FILE *arq;
char Str[100];
char result;

main()
{

	// Abre um arquivo texto para leitura
	arq = fopen("teste.txt","wt");
	
	strcpy(Str, "TESTE  ESCRITA");
	result = fputs(Str, arq);
	
		
	fclose(arq);
	
	
}
