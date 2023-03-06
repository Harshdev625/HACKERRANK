#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                printf("%d ", k);
            }
            else
            {
                printf("%d ", n - j + 1);
                k--;
            }
        }

        for (int a = 1 /*,b=k*/; a <= k - 1; a++)
        {

            printf("%d ", k);
        }
        for (int e = k + 1; e <= n; e++)
        {
            printf("%d ", e);
        }
        k = n;
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (n - j + 1 > i)
            {
                printf("%d ", n - j + 1);
            }
            else
            {
                int l = i + 1;
                printf("%d ", l);
            }
        }
        int m = i + 1;
        for (int j = i; j; j--)
        {

            printf("%d ", m);
        }
        for (int c = m + 1; c <= n; c++)
        {
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}
