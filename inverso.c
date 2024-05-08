#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &x);
    char *arreglo = (char *)malloc(x * sizeof(char));

    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingresa %d letras para llenar el arreglo:\n", x);
    for (int i = 0; i < x; i++) {
        scanf(" %c", arreglo + i); 
    }

    printf("El arreglo en forma inversa es: ");
    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", *(arreglo + i)); 
    }
    printf("\n");

    free(arreglo);

    return 0;
}