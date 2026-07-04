#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r= 3, c=4;
    int** arr;

    arr = (int**) calloc(r, sizeof(int*));
    for (int i = 0; i < r; i++)
    {
        arr[i] = (int*) calloc(c, sizeof(int));
    }

    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = count++;
        }
    }


    for (int i = 0; i < r; i++)
    {
        printf("[");
        for (int j = 0; j < c;  j++)
        {
            printf("%d", arr[i][j]);
            if (j < c - 1)
            {
                printf(", ");
            }
        }
        printf("],\n");
        free(arr[i]);
    }
    free(arr);
    return 0;
}