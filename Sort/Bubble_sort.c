#include <stdio.h>
int main()
{
    int a[] = {5, 7, 4, 2, 1, 3};
    printf("[");
    for (int k = 0; k < 5; k++)
    {
        printf("%d,", a[k]);
    }
    printf("]");
    for (int i = 0; i < 5; i++)
    {
        printf("\nIteration %d", i + 1);
        for (int j = 0; j < 5; j++)
        {
            if (a[j] > a[j + 1])
            {
                printf("\n\t%d > %d", a[j], a[j + 1]);
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                printf("\n\t  [");
                for (int k = 0; k < 5; k++)
                {
                    printf("%d,", a[k]);
                }
                printf("]");
            }
            else
            {
                printf("\n\t%d > %d", a[j], a[j + 1]);
                printf("\n\t  [");
                for (int k = 0; k < 5; k++)
                {
                    printf("%d,", a[k]);
                }
                printf("]");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}