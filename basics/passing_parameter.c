#include<stdio.h>

int add(int x,int y)
{
	int c=x+y;
	return c;

}

int main()
{
	int a=2;

	int b=9;
	int p=add(a,b);
	printf("%d\n",p);
}
