
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	
	FILE *aarchivo;
	char linea[10];
	
	aarchivo = fopen("ids.txt", "r");
	if(aarchivo == NULL)
	
	

	{
		
		printf("Error al abrir el archivo.\n");
		return(1);
		
	}
	

	fgets(linea, 10, aarchivo);
	while( fgets ( linea, 10, aarchivo ) != NULL )
	printf("Este es el resultado %s", linea);
	
	fclose(aarchivo);
	
}
