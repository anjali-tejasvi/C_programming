#include<stdio.h>
int fun1(int n)  //Sum of n natural numbers 5+4+3+2+1=15
	{
        if(n==0)
	{
        return 0;
	}
        else
	{
        return fun1(n-1)+n;
	}

	}

int fun2(int n) //Factorial!!!!!!!
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return fun2(n-1)*n;
	}
}
int fun3(int m , int n)// (2^5 = 32)  Power value
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return fun3(m,n-1)*m;
	}
}
int main()
{
	int a = fun1(5);
	printf("%d",a);
	printf("\n");
	int b = fun2(4);
	printf("%d",b);
	printf("\n");
	int c =fun3(2,5);
	printf("%d\n",c);
	printf("\n");
}
