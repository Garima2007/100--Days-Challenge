Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    int rowSum[R];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < R; i++)
    {
        rowSum[i] = 0;
        for (int j = 0; j < C; j++)
        {
            rowSum[i] += matrix[i][j];
        }
    }
    for (int i = 0; i < R; i++)
    {
        printf("%d ", rowSum[i]);
    }
    return 0;
}
