#define MAX_CHARS 99999

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *f;
	f = fopen("alcanos.txt", "r");
	char delimitador[] = " ";

	FILE *fo;
	fo = fopen("salida.txt", "w");

	char texto[MAX_CHARS];

	int cantidad_alcanos;
	int contador_lineas=0;
	while( fgets(texto, MAX_CHARS, f)!=NULL ){
		contador_lineas++;
		if(contador_lineas==1){
			cantidad_alcanos = atoi(texto);
			continue; 
		}
		printf("*%d %s \n",(int)strlen(texto), texto ); //imprimimos la linea
		
		for(int i=0; i<strlen(texto); i++){
			printf("- %c -", texto[i] );
			fputc(texto[i], fo);
			fputc(' ', fo);
		}
		fputc('\n', fo);
		/*
		char* palabra = strtok(texto, delimitador);
		while(palabra != NULL){
			printf("--pal: %s\n", palabra);
			palabra = strtok(NULL, delimitador);
		}
		*/
	}
	printf("HAY %d ALCANOS", cantidad_alcanos);
	fclose(f);

	
	
	fclose(fo);

	return 0;
}