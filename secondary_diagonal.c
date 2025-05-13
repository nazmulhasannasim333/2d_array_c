#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool isDiagonal = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j != r - 1)
                {
                    if (a[i][j] != 0)
                    {
                        isDiagonal = false;
                        printf("This is not a diagonal matrix!!!");
                    }
                }
            }
        }
        if (isDiagonal)
        {
            printf("This is a diagonal matrix");
        }
    }
    else
    {
        printf("This is not a diagonal matrix");
    }

    return 0;
}