#include<stdio.h>
float read_number()
{
	float a,b;
	scanf("%f%f",&a,&b);
	float c= a+b;
	int d=c;
	printf("%.1f\t %.1f\t %d\n",a,b,d);
}

int main()
{
	read_number();
}


