#include <stdio.h>

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

    if (c == 1)
    {
        printf("This is a col matrix\n");
    }
    else
    {
        printf("This is not a col matrix\n");
    }

    return 0;
}