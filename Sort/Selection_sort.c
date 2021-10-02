#include <stdio.h>

int main()
{
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    printf("Original Array: \n");
    printf("\t[");
    for (int i = 0; i < 8; i++)
    {
        if (i == 7)
            printf("%d]\n", arr[i]);
        else
            printf("%d,", arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("Iteration: %d\n", i + 1);
        int min = i;
        for (int j = i; j < 8; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        printf("\tMinimum: %d at index: %d\n", arr[min], min);
        int t = arr[i];
        arr[i] = arr[min];
        arr[min] = t;
        printf("\t%d <-> %d\n", arr[i], arr[min]);
        printf("\t[");
        for (int i = 0; i < 8; i++)
        {
            if (i == 7)
                printf("%d]\n", arr[i]);
            else
                printf("%d,", arr[i]);
        }
    }

    printf("Sorted Array:\n");
    printf("\t[");
    for (int i = 0; i < 8; i++)
    {
        if (i == 7)
            printf("%d]\n", arr[i]);
        else
            printf("%d,", arr[i]);
    }
}