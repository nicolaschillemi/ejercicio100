#include <stdio.h>
#include <stdlib.h>

void main() {

    int n1 = 0, n2 = 0, impares = 0, i = 0;

    printf("Ingrese el rango de n%cmeros para contar los impares separados con un espacio: ",163);
    scanf("%i %i",&n1,&n2);

    for (i=n1-1;i<n2+1;i++) {
        if (i % 2 != 0) {
            impares++;
        }
    }

    printf("La cantidad de n%imeros impares es %i",163,impares);

}
