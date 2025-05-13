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

    bool isUnit = true;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j)
                {
                    if (a[i][j] != 0)
                    {
                        isUnit = false;
                        printf("This is not a unit matrix");
                    }
                }
                else
                {
                    if (a[i][j] != 1)
                    {
                        isUnit = false;
                        printf("This is not a unit matrix");
                    }
                }
            }
        }
        if (isUnit)
        {
            printf("This is a unit matrix");
        }
    }
    else
    {
        printf("This is not a unit matrix");
    }

    return 0;
}