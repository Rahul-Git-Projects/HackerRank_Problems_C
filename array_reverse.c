#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    int *reverse_array = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
        *(reverse_array + i) = *(arr + num - 1 - i);

    arr = reverse_array;

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}