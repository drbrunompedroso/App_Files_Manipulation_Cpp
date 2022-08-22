#include<stdio.h>
#include<conio.h>
#include<string.h>

FILE *arq;
char Str[100];
char result;
int i=0;
float tensao_max, tensao_min, nivel_max, nivel_min, coef_ang, nivel, sensor_v, sensor_porc;

void calc_cang()
{
	coef_ang=(tensao_max-tensao_min)/(nivel_max-nivel_min);
}

void calc_sensor()
{
	 nivel= sensor_v/coef_ang;
}

void conv_porc()
{
	sensor_porc= (nivel/nivel_max)*100;
}

main()
{
 	  
	  printf("transdutor - TENSAO X NIVEL""\n");
      printf("ENTRE COM O VALOR MAXIMO DE TENSAO (V):""\n");
      scanf("%f", &tensao_max);
      printf("ENTRE COM VALOR MINIMO DE TENSAO (V):""\n");
      scanf("%f", &tensao_min);
      printf("ENTRE COM O VALOR MAXIMO DO NIVEL (L):""\n");
      scanf("%f", &nivel_max);
      printf("ENTRE COM VALOR MINIMO DO NIVEL (L):""\n");
      scanf("%f", &nivel_min);
      printf("ENTRE COM O VALOR SDO SENSOR (V):""\n");
      scanf("%f", &sensor_v);
      
      calc_cang();
      calc_sensor();  
                 
   	  printf("\n""CONVERSAO %.2f",nivel);	
   	  printf("L");	

	   // Abre um arquivo texto para leitura
	   arq = fopen("sensores.txt","wt");
	   
	   if(nivel >= (0.75*nivel_max))
	   {
	   strcpy(Str, "NIVEL ALTO");
	   result = fputs(Str, arq);
	   fclose(arq);
	   }
	   else if(nivel >= (0.50*nivel_max) && nivel < (0.75*nivel_max))
	   {
	   strcpy(Str, "NIVEL MEDIO");
	   result = fputs(Str, arq);
	   fclose(arq);
	   }
	   else if(nivel < (0.50*nivel_max))
	   {
	   strcpy(Str, "NIVEL BAIXO");
	   result = fputs(Str, arq);
	   fclose(arq);
	   }	
}
