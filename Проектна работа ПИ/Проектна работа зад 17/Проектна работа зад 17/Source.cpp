#include <stdio.h>
#include <stdlib.h>

#define N 3 // Array size

int main() {
    int A[N][N], B[N][N], C[N][N];
    int p, D[10];
    int i, j;

    //Requirements
    printf("Program to process 3 arrays A[N,N], B[N,N] and C[N,N], where given integers in the interval [-1000; 1000].\n");
    printf("The program performs the following actions:\n");
    printf("a) to form a one-dimensional array D[N], which is formed by all elements greater than P that lie below the main diagonal of the given array;\n");
    printf("b) sort the array by size.\n");

    //Author
    printf("Ot: Petko Gospodinov Gospodinov #371222015\n");

    //Input Arrays
    printf("Enter data for Array A[3][3]:\n");
    do {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("A[%d][%d]: ", i, j);
                scanf_s("%d", &A[i][j]);
            }
        }
    } while (A[i][j] <= -1000 && A[i][j] >= 1000);

    printf("Enter data for Array B[3][3]:\n");
    do {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("B[%d][%d]: ", i, j);
                scanf_s("%d", &B[i][j]);
            }
        }
    } while (A[i][j] <= -1000 && A[i][j] >= 1000);

    printf("Enter data for Array C[3][3]:\n");
    do {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("C[%d][%d]: ", i, j);
                scanf_s("%d", &C[i][j]);
            }
        }
    } while (A[i][j] <= -1000 && A[i][j] >= 1000);

    //Print matrices
    printf("Data in A:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Data in B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Data in C:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    printf("Enter the value of P: ");
    scanf_s("%d", &p);

    int idx = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < i; j++) {
            if (A[i][j] > p && i > j) {
                D[idx] = A[i][j];
                idx++;
            }
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < i; j++) {
            if (B[i][j] > p && i > j) {
                D[idx] = B[i][j];
                idx++;
            }
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < i; j++) {
            if (B[i][j] > p && i > j) {
                D[idx] = C[i][j];
                idx++;
            }
        }
    }

    printf("Data in D:\n");
    for (i = 0; i < idx; i++) {
        printf("%d ", D[i]);
    }

    //sorting array D (Bubble method)
    for (i = 0; i < idx - 1; i++) {
        for (j = 0; j < idx - i - 1; j++) {
            if (D[j] > D[j + 1]) {
                int temp = D[j];
                D[j] = D[j + 1];
                D[j + 1] = temp;
            }
        }
    }

    printf("\nSorted data in D:\n");
    for (i = 0; i < idx; i++) {
        printf("%d ", D[i]);
    }

    return 0;
}
