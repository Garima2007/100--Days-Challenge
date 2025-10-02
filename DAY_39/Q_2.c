Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() 
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    int i, j, sum = 0;
    for (i = 0; i < R; i++) 
    {
        for (j = 0; j < C; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (R != C) {
        printf("0");
        return 0;
    }
    for (i = 0; i < R; i++) 
    {
        sum = sum + matrix[i][i];
    }
    printf("%d", sum);
    return 0;
}
