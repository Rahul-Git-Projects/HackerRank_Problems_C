#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max = 0;
    int user_array[4] = {a, b, c, d};
    for (int i = 0; i < 4; i++)
    {
        if (user_array[i] > max)
            max = user_array[i];
    }
    return max;
}

int main()
{
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    printf("%d", max_of_four(a, b, c, d));
    return 0;
}