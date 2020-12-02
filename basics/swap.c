#include<stdio.h>

void  swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d\n",a);
	printf("%d\n",b);

}

int main()
{

int s=12;
int y=89;
printf("before\n a=%d\nb=%d\n",s,y);
printf("after\n");
swap(s,y);

}
