#include <stdio.h>
int main()

{
    int n;
    scanf("%d", &n);
    printf("\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf(" %02d", j);
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" %02d", i);
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf(" %02d", i + j);
        }

        printf(" \n");
    }
    //Part2
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" %02d", j);
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf(" %02d", i + 1);
        }

        for (int j = 1; j <= n - i; j++)
        {
            printf(" %02d", j + i);
        }
        printf(" \n");
    }

    return 0;
}
