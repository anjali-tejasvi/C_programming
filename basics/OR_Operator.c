#include<stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	if(k%3==0 || k%5==0)
	{
	printf("divisible by 5 or 3\n");
	}
	else
	printf("Not divisible");
}
