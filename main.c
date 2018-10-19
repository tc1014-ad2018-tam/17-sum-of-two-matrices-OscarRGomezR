/*
Write a program that reads two matrices of n x n elements each.  Produce a third matrix with the sum of both matrices.
n should be greater than 1 and less than or equals to 10.

Name: Óscar Rubén Gómez Ríos
Mail: A01411750@itesm.mx
Matricule Number: A01411750

 */

#include <stdio.h>

void values(int a, int **matrix) {


    for (int i = 0; i < a; i++) {
        for (int b = 0; b < a; b++) {
            printf("%ix%i: ", i+1, b+1);
            scanf("%i", &matrix[i][b]);
        }
    }

}

void Matrix(int n, int **matrix) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sum(int n, int **matrix1, int **matrix2) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%i ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int n;

    do {
        printf("What size would you like your matrices?\n");
        scanf("%d", &n);
    } while (n < 2 || n > 10);

    int matrix2[n][n];
    int matrix3[n][n];

    printf("Add values for the following places in matrix 1:\n");
    values(n, matrix2);
    printf("Add values for the following places in matrix 2:\n");
    values(n, matrix3);

    printf("\nMatrix 1:\n");
    Matrix(n, matrix2);
    printf("\nMatrix 2:\n");
    Matrix(n, matrix3);
    printf("\nMatrix 3:\n");
    sum(n, matrix2, matrix3);

    return 0;
}