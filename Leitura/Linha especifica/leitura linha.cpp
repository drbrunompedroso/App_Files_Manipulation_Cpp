#include<stdio.h>
#include<conio.h>

main()
{
	
	FILE *arq;
	char linha[100];
	char *result;
	int x,i;

	while(1)
	{
	// Abre um arquivo texto para leitura
	arq = fopen("teste.txt","rt");
	
	printf("\n Linha para leitura");
	scanf("%d", &x);
		
	for (i==0; i<x; i++)
	{
			// leitura de uma linha
			result = fgets(linha, 100, arq);
	}
	i=0;
	x=0;
	printf("%s", linha);	
	fclose(arq);
 	}
}
