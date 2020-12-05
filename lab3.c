#include <stdio.h>

int main(void)
{

    int n, m, max, total_row, total_column;
    scanf("%d %d", &n, &m);

    int i, j;
    int a[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    total_row = 0;
    for (i = 0; i < n; i++)
    {
        max = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
        total_row += max;
    }
    total_column = 0;
    for (i = 0; i < m; i++)
    {
        max = 0;
        for (j = 0; j < n; j++)
        {
            if (a[j][i] > max)
                max = a[j][i];
        }
        total_column += max;
    }

    printf("%d %d\n", total_row, total_column);

    return 0;
}
