#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Ingrese el número de filas: ");
    scanf("%d", &m);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &n);

    // Reservar memoria para la matriz con calloc
    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    // Imprimir la matriz inicializada con ceros
    printf("Matriz inicializada con ceros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]);
        }
        printf("\n");
    }

    // Permitir al usuario modificar valores en la matriz
    printf("Ingrese las coordenadas (fila, columna) y el valor para modificar (ej. 1 2 5):\n");
    int row, col, value;
    scanf("%d %d %d", &row, &col, &value);

    // Validar que las coordenadas estén dentro del rango
    if (row >= 1 && row <= m && col >= 1 && col <= n) {
        matrix[(row - 1) * n + (col - 1)] = value;
    } else {
        printf("Error: Coordenadas fuera de rango.\n");
    }

    // Imprimir la matriz actualizada
    printf("Matriz actualizada:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i * n + j]);
        }
        printf("\n");
    }

    // Liberar la memoria reservada
    free(matrix);
    return 0;
}