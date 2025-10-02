Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    int i, j;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (R != C) {
        printf("False");
        return 0;
    }
    for (i = 0; i < R; i++) {
        for (j = i + 1; j < R; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}
