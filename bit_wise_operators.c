#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int a, b, max_and = 0, max_or = 0, max_xor = 0;
    for (int i = 1; i < n; i++)
    {
        a = i;
        for (int j = i + 1; j <= n; j++)
        {
            b = j;
            if ((a & b) > max_and && (a & b) < k)
                max_and = a & b;
            if ((a | b) > max_or && (a | b) < k)
                max_or = a | b;
            if ((a ^ b) > max_xor && (a ^ b) < k)
                max_xor = a ^ b;
        }
    }
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
