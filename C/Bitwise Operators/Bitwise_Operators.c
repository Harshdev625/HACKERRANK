#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int max1 = 0, max2 = 0, max3 = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int a = i & j;
            int b = i | j;
            int c = j ^ i;
            if (a > max1)
            {
                if (a < k)
                {
                    max1 = a;
                }
            }
            if (b > max2)
            {
                if (b < k)
                {
                    max2 = b;
                }
            }
            if (c > max3)
            {
                if (c < k)
                {
                    max3 = c;
                }
            }
        }
    }
    printf("%d\n%d\n%d", max1, max2, max3);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
