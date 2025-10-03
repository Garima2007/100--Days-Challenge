Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int matrix[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int k = 0; k < R + C - 1; k++)
    {
        int i = (k < C) ? 0 : k - C + 1;
        int j = (k < C) ? k : C - 1;
        while (i < R && j >= 0)
        {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    return 0;
}
