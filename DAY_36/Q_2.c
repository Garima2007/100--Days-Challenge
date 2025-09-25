// Q72: Find the sum of all elements in a matrix.
#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    int sum = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("%d\n", sum);

    return 0;
}
