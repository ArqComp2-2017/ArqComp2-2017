#include <stdio.h>
int mult(); //Definicón de la función multiplicadora
int acumulador;//Definición de la variable acumulador
int contador;//Definición de la variable contador
int n1;//Definición de la variable del multiplicando
int n2;//Definición de la variable multiplicador

int main()
{
    printf( "\n   Introduzca primer nucmero entero (multiplicando): ", 163 );//Línea de petición de ingreso de variable del multplicando
        scanf( "%d", &n1 );//Línea de captura de ingreso de teclado del multiplicando
        printf( "\n   Introduzca segundo nucmero entero (multiplicador): ", 163 );//Línea de petición de ingreso de variable del multiplicador
        scanf( "%d", &n2 );//Línea de captura de ingreso de teclado del multiplicador
        printf(mult());//Llmado de la función mult
}
   int mult( )//Definición de la función mult
   {
        if ( n1 >= 0 && n2 >= 0 )//Verificación que los los números ingresados sean positivos
        {
            acumulador = 0;//inicialización del contador
            if ( n2 != 0 )//Verifica que el divisor no sea 0
            {
                contador = 1;
                while ( contador <= n1 )//condición del ciclo para las sumas sucesivas
                {
                    acumulador += n2;
                    contador++;
                }
            }

            printf( "\n   %d * %d = %d", n1, n2, acumulador );

        }
        else
            printf( "\n   ERROR: Ambos n%cmeros deben ser mayores o iguales que cero.", 163 );



        return 0;
   }