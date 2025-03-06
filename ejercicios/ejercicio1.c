#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);  // Leer el tamaño del arreglo

    int *arr = (int *)malloc(n * sizeof(int)); // Asignar memoria dinámicamente

    if (arr == NULL) { // Verificar si la asignación fue exitosa
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Llenar el arreglo con valores ingresados por el usuario
    }

    printf("El arreglo es: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Imprimir el arreglo
    }
    printf("\n");

    free(arr); // Liberar la memoria asignada dinámicamente

    return 0;
}