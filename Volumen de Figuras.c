
/// VOLUMEN DEL CUBO ///

#include <stdio.h>
#include <math.h>

int main() //Funcion principal
{
    float lado,volumen; //Variables
  
     printf("\nIngrese la medida de un lado del cubo: ");
     scanf("%f",&lado);
     
     volumen = pow(lado,3);
     
     printf("\nEl volumen del cubo es: %.1f",volumen);

  return 0;
}

/*
/// VOLUMEN DEL CILINDRO ///

#include <stdio.h>
#define PI 3.1416

int main(){
	
        float altura, radio,volumen;
        
        printf("\nIngrese la altura del cilindro: ");
        scanf("%f",&altura);
        printf("Ingrese el radio del cilindro: ");
        scanf("%f",&radio);
        
        volumen = (radio*radio)*PI*altura;
        
        printf("\nEl volumen del cilindro es: %.2f",volumen);
        
        return 0;
}
*/
