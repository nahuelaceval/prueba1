#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x, y, acumuladorY, operacion, contador, resultado;
    char seguir;
    contador = 0;


    printf("Ingrese la operacion a realizar: 1-suma; 2-resta; 3-multiplicacion; 4-division\n");
    scanf("%i",&operacion);

    if(operacion==1)
        {



    acumuladorY = 0;
    printf("\nIngrese un numero: ");
    scanf("%i",&x);






    do{


    printf("\nIngrese otro numero: ");
    scanf("%i",&y);
    acumuladorY=acumuladorY+y;

    printf("\nQuiere seguir ingresando numeros?(s/n) ");
    fflush( stdin );
    scanf("%c",&seguir);




    }while(seguir != 'n');
    resultado=x+acumuladorY;

    printf("\nEl resultado es: %i\n",resultado);


        }

    if (operacion==2)
        {

    acumuladorY = 0;
    printf("\nIngrese un numero: ");
    scanf("%i",&x);






    do{


    printf("\nIngrese otro numero: ");
    scanf("%i",&y);
    acumuladorY=acumuladorY+y;

    printf("\nQuiere seguir ingresando numeros?(s/n) ");
    fflush( stdin );
    scanf("%c",&seguir);




    }while(seguir != 'n');
    resultado=x-acumuladorY;

    printf("\nEl resultado es: %i\n",resultado);




        }


    return 0;
}
