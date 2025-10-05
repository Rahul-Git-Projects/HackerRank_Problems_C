#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *num = (char *)calloc(1000, sizeof(char));
    char *original_ptr = num;
    int f_0 = 0, f_1 = 0, f_2 = 0, f_3 = 0, f_4 = 0, f_5 = 0, f_6 = 0, f_7 = 0, f_8 = 0, f_9 = 0;
    scanf(" %[^\n]", num);

    while (*num)
    {
        switch (*num)
        {
        case '0':
            f_0 += 1;
            break;
        case '1':
            f_1 += 1;
            break;
        case '2':
            f_2 += 1;
            break;
        case '3':
            f_3 += 1;
            break;
        case '4':
            f_4 += 1;
            break;
        case '5':
            f_5 += 1;
            break;
        case '6':
            f_6 += 1;
            break;
        case '7':
            f_7 += 1;
            break;
        case '8':
            f_8 += 1;
            break;
        case '9':
            f_9 += 1;
            break;
        }
        num++;
    }

    printf("%d %d %d %d %d %d %d %d %d %d", f_0, f_1, f_2, f_3, f_4, f_5, f_6, f_7, f_8, f_9);
    free(original_ptr);
    return 0;
}
