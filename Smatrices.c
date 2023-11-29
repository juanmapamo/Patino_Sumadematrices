#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    
    srand (time (NULL));

    int a,b;
    printf("Ingrese el tamanio de la fila\n");
    scanf("%d", &a);
    printf("Ingrese el tamanio de la columna\n");
    scanf("%d", &b);
    int matriz[a][b];
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
 
    for (int i = 0; i < a; i++)
    {
       for (int j = 0; j < b; j++)
       {
        Segundamatriz[i][j]=rand()%101;
       }
    }

    
    return 0;
}