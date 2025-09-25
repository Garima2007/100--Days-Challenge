Q71: Read and print a matrix.
#include <stdio.h>
int main() {
    int R, C; // C is column and R is row
    scanf("%d %d", &R, &C);
    int matrix[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
