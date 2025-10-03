#include <stdio.h>

void series(int a, int b, int c, int n)
{
    int next = 0;
    switch (n)
    {
    case 1:
        printf("%d", a);
        break;
    case 2:
        printf("%d", b);
        break;
    case 3:
        printf("%d", c);
        break;
    }
    if (n > 3)
    {
        for (int i = 1; i <= n - 3; i++)
        {
            next = a + b + c;
            a = b;
            b = c;
            c = next;
        }
        printf("%d", next);
    }

    return;
}

int main(void)
{
    int num1, num2, num3, nth;
    scanf("%d\n%d %d %d", &nth, &num1, &num2, &num3);
    series(num1, num2, num3, nth);
    return 0;
}