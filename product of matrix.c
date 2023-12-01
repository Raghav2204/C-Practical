//program to find product of any matrix


#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1; // Exit with an error code
    }

    int firstMatrix[m][n], secondMatrix[p][q], resultMatrix[m][q];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // Display the result
    printf("Product of the two matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
