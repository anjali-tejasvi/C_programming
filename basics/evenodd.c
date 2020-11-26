#include<stdio.h>

int evenodd()

{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num%2==0)
	printf("Even Number");
	else
	printf("Odd Number");
}
int main()
{
	evenodd();
}
