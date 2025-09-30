Q75: Add two matrices.
#include <stdio.h>
int main() {
    int A[3][3], B[3][3], Sum[3][3];
    int i, j;
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf(" Matrix after Addition is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
