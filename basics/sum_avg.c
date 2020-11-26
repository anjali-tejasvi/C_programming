#include<stdio.h>
int print_sum_avg(int n){
	int a = n;
	int sum=0;
	for(int i=1;i<=a;i++)
	{
		sum=sum+i;
	}
	int avg = sum/n;
	printf("%d\t%d\n",sum,avg);
}

int main()
{
	print_sum_avg(20);
}
