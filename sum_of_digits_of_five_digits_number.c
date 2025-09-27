#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int sum = 0;
    int user_num;
    scanf("%d", &user_num);
    for (int i = 1; user_num / i >= 1; i *= 10)
    {
        sum += user_num / i - (user_num / (i * 10)) * 10;
    }
    printf("%d", sum);
}