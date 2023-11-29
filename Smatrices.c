#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    
    srand (time (NULL));

    //En esta seccion decimos al ususario que ingrese cuantas filas y cuantas columnas va a desear.
    int a,b;
    printf("Ingrese el tamanio de la fila\n");
    scanf("%d", &a);
    printf("Ingrese el tamanio de la columna\n");
    scanf("%d", &b);
    int matriz[a][b];

    //En esta seccion llamamos a la Primera matriz para que nos de numeros aleatorios del 0 al 100.
    for (int i = 0; i < a; i++)
    {
       for (int j = 0; j < b; j++)
       {
        matriz [i][j]=rand()%101;
       }
    }
    printf("Primera matriz\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    int Segundamatriz[a][b];

    //En esta seccion llamamos a la Segunda matriz para que nos de numeros aleatorios del 0 al 100.

    for (int i = 0; i < a; i++)
    {
       for (int j = 0; j < b; j++)
       {
        Segundamatriz[i][j]=rand()%101;
       }
    }

    printf("Segunda matriz\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", Segundamatriz[i][j]);
        }
        printf("\n");
    }

    int Sumamatriz[a][b];

    //En esta seccion hacemos la suma de la primera y la segunda matriz.

    for (int i = 0; i < a; i++)
    {
       for (int j = 0; j < b; j++)
       {
        Sumamatriz[i][j]=matriz[i][j] + Segundamatriz[i][j];
       }
    }

    //En esta seccion imprmimos el resultado de las dos matrices.

    printf("Resultado de la suma de matrices\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", Sumamatriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}