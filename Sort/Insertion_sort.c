#include <stdio.h>
int main()
{
    int arr[] = {3, 4, 2, 10, 12, 1, 5, 6};
    printf("[");
    for (int i = 0; i < 8; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("]\n");
    for (int i = 1; i < 8; i++)
    {
        printf("Iteration: %d\n", i);
        int key = arr[i], j = 0;
        // while (key < arr[j] && j >= 0)
        // {
        //     printf("\t%d < %d\n", key, arr[j]);
        //     arr[j + 1] = arr[j];
        //     j--;
        //     printf("\n\t[");
        //     for (int k = 0; k < 8; k++)
        //     {
        //         printf("%d,", arr[k]);
        //     }
        //     printf("]\n");
        // }
        while (key < arr[j] && j <= i - 1)
        {
            printf("\t%d > %d\n", key, arr[j]);
            arr[i] = arr[i - 1];
            j++;
            printf("\n\t[");
            for (int k = 0; k < 8; k++)
            {
                printf("%d,", arr[k]);
            }
            printf("]\n");
        }
        // arr[] = key;
        printf("\n\t[");
        for (int k = 0; k < 8; k++)
        {
            printf("%d,", arr[k]);
        }
        printf("]\n");
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
}