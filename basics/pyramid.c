#include <stdio.h>
int fun()
{
        int row; // row = row no.
        int space;
        int star; // star variable is used to print star
        int totalrow;// total no. of row entered
        printf("Enter the totalrow\n");
        scanf("%d",&totalrow);
        for(row=1 ; row<=totalrow ; row++)
        {
        for(space=1 ; space<=(totalrow-row) ; space++)
        {
        printf(" ");
        }
        for(star=1 ; star<=((2*row)-1); star++)
        {
        printf("*");
        }

        printf("\n");
        }
}


int main()
{
  fun();
}
/* Programe to print a satar pattern pyramid.*/
