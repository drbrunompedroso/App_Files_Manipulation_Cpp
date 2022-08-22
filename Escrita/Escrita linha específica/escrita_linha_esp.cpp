#include<stdio.h>
#include<conio.h>
#include<string.h>

FILE *arq;
char Str[100];
char result;
int i, x;

main()
{
	
	// Abre um arquivo texto para leitura
	arq = fopen("teste.txt","wt");
	
	
		strcpy(Str, " TESTE ");
		result = fputs(Str, arq);
		
		strcpy(Str, "\n escrita ");
		result = fputs(Str, arq);
		
		strcpy(Str, "\n de dados no arquivo ");
		result = fputs(Str, arq);
	
	
	fclose(arq);
	
	
}
