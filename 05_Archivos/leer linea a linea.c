#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *fp; 
  fp = fopen("archivo.txt", "r");

  char linea[255];

  while ( fgets (linea, 60, fp) != NULL ) { // Lee el archivo linea por linea
    linea[strcspn(linea, "\r\n")] = 0; // elimina el salto de linea de la palabra
    
    char delim[] = " "; // define como delimitador el espacio para separar cada palabra
    char *palabra = strtok(linea, delim); // separa linea por delimitador (palabra por palabra) una vez
    while(palabra != NULL){   // recorre palabra a palabra
      /*
      En este punto, usted puede acceder a palabra
      */
      printf("'%s'\n", palabra); // ELIMINAR. Imprime la palabra. 
      palabra = strtok(NULL, delim); // vuelve a separar palabra a palabra. Si usted elimina esta linea el programa no se detiene
    }
  }
  
  fclose(fp); // cierra el archivo de entrada 

  return 0;
}