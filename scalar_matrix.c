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

    bool isScalar = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    printf("%d\n", a[i][j]);
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        isScalar = false;
                        printf("This is not a scalar matrix!!");
                    }
                }
            }
        }
        if (isScalar)
        {
            printf("This is a scalar matrix");
        }
    }
    else
    {
        printf("This is not a scalar matrix");
    }

    return 0;
}