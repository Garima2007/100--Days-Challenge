Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    int i, j;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    if (R != C)
    {
        printf("False");
        return 0;
    }
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}
