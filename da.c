#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int *arr = (int *)malloc(r * c * sizeof(int));
    int i, j;
    for (j = 0; j < r; j++)
    {
        for (i = 0; i < c; i++)
        {
            scanf("%d", arr + i * c + j);
        }
    }
    for (j = 0; j < r; j++)
    {
        for (i = 0; i < c; i++)
        {
            printf("%d ", *(arr + i*c + j));
        }
        printf("\n");
    }
    return 0;
}