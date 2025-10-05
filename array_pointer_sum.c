#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    int sum = 0;
    scanf("%d", &n);
    char *s = calloc(12 * n, sizeof(char));
    scanf(" %[^\n]", s);

    char *token = strtok(s, " ");
    while (token)
    {
        sum += atoi(token);
        token = strtok(NULL, " ");
    }

    printf("%d", sum);
    free(s);

    return 0;
}