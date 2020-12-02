#include<stdio.h>
int main()
{
	struct num{
	int x;
	int y;
	};
	struct num r={5,8};
	printf("%d\n",r.x*r.y);
}

