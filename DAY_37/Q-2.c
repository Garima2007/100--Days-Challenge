Q74: Find the transpose of a matrix.
#include <stdio.h>
int main() {
    int R, C, i, j;  //R = rows   C = columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &R, &C);
   int matrix[R][C], transpose[C][R];
    printf("Enter elements of the matrix\n");
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < C; i++) {
        for (j = 0; j < R; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
