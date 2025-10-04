#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    char *token = strtok(s, " ");
    printf("%s", token);
    while (token)
    {
        token = strtok(NULL, " ");
        if (token)
            printf("\n%s", token);
    }
    return 0;
}