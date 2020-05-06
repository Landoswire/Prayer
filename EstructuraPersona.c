#include <stdio.h>
#include <stdlib.h>


typedef struct persona
{
	unsigned long int ID_Persona;
	char nombre[100];
	char sexo;
	char direccion[100], religion[50], escolaridad[20];
	unsigned short int edad;
	
} Persona;


int main()
{
    Persona array_de_personas[10];
	Persona una_persona;
    char c;
    int cont = 1;
    FILE *aarchivo;

    for(int i = 0; i < 10; i++){
    	
        array_de_personas[i].ID_Persona = cont;
        printf("Ingrese el nombre completo:\n");
        fgets(array_de_personas[i].nombre, 99,stdin);
        
        printf("Ingrese el sexo [M/F]:\n");
        array_de_personas[i].sexo = getc(stdin);
        
        printf("Ingrese la edad:\n");
        scanf("%hu", &array_de_personas[i].edad);
        
        while ((c = getc(stdin)) != '\n' && c != EOF); 
        printf("Inngrese la direccion:\n");
        fgets(array_de_personas[i].direccion, 99,stdin);
        
        printf("Ingrese la religion:\n");
        fgets(array_de_personas[i].religion, 49,stdin);
        
        printf("Ingrese la escolaridad:\n");
        fgets(array_de_personas[i].escolaridad, 19,stdin);
        
        while ((c = getc(stdin)) != '\n' && c != EOF);
        cont++;
        
    }
    aarchivo = fopen("miarchivo.bin", "w");
    
    
    if(aarchivo == NULL){
    
        printf("Error al abrir archivo.\n");
        return(1);
    }

    fwrite(array_de_personas, sizeof(Persona), 10, aarchivo);

    fclose(aarchivo);
    
}
