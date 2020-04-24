/******************************************************************
* Programa: Ejemplo Clase 3
*
* Objetivo:
*   -Crear una función que permita ingresar un numero al usuario y lo retorne.
*   -Crear una función que reciba el radio de un círculo y retorne su área
*   -Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
*    el área de un círculo cuyo radio es ingresado por el usuario
*   -Documentar las funciones al estilo Doxygen
*
* Aspectos a destacar:
*   -Declaración de funciones que devuelven y reciben valores
*   -Hacer notar que el uso de funciones evita el código repetido y ayuda a que
*    el mismo sea mas legible
*   -La función debería comenzar indicando el objetivo que persigue y el
*    significado de sus parámetros.
*
* *******************************************************************/


#include <stdio.h>
#include <stdlib.h>

// Prototipos de las funciones
float getFloat (char mensaje[],char error [], float min, float max);
float calculaAreaCirculo(float radio);


int main()
{
    float num;
    float area;

    num = getFloat("Ingrese el valor del radio :  " , "Error reingrese el valor del radio: ", 0,9999999);
    area = calculaAreaCirculo(num);
    printf("El area del circulo es: %.2f\n",area);
    return 0;
}


/**
 * \brief Solicita un número y lo retorna
 * \return Número ingresado por el usuario
 *
 */
float getFloat (char mensaje[],char error [], float min, float max)
{

float num;

printf("%s",mensaje);
fflush( stdin );
scanf("%f", &num);

 while (num < min || num> max)
{
  printf("%s",error);
  fflush( stdin );
  scanf("%f", &num);
}

 return num;
}

/**
 * \brief Recibe el radio y calcula el área del círculo
 * \param Radio correspondiente al radio del círculo
 * \return El área del círculo
 *
 */
float calculaAreaCirculo(float radio)
{
    float valor;
    valor = 3.14 * radio * radio;
    return valor;
}
