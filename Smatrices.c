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
 
    
    return 0;
}