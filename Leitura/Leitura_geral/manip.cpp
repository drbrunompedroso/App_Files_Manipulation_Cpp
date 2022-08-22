#include<stdio.h>
#include<conio.h>


main()
{
	
	FILE *arq;
	char linha[100];
	char *result;
	

	
	// Abre um arquivo texto para leitura
	arq = fopen("teste.txt","rt");
	
	// leitura de uma linha
	result = fgets(linha, 100, arq);
	printf("%s", linha);
	
	result = fgets(linha, 100, arq);
	printf("%s", linha);
	
	result = fgets(linha, 100, arq);
	printf("%s", linha);
	
	fclose(arq);
	
	
}
