Q80: Multiply two matrices.
#include <stdio.h>
int main()
{
    int R1, C1, R2, C2;
    scanf("%d %d", &R1, &C1);
    int A[R1][C1];
    int i, j, k;
    for (i = 0; i < R1; i++)
    {
        for (j = 0; j < C1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d %d", &R2, &C2);
    int B[R2][C2];
    for (i = 0; i < R2; i++)
    {
        for (j = 0; j < C2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    if (C1 != R2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }
    int result[R1][C2];
    for (i = 0; i < R1; i++)
    {
        for (j = 0; j < C2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < C1; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (i = 0; i < R1; i++)
    {
        for (j = 0; j < C2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
