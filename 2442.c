#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i + j > n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (; j <= i + n - 1; j++)
        {
            if (i + j > n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}