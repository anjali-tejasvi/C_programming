#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun1() //logic behind the strlen (for length of the String)
{
	char a[] ="abcd";
	int i;
	for(i =0; a[i] !='\0';i++);
	printf("string length is:%d \n",i);
	printf("\n");
}
void fun2() //logic behind strcpy
{
	char a[]="College";
	printf("%s\n",a);
	char b[] ="life";
	printf("%s\n",b);
	int a1 = strlen(a);
	int a2= strlen(b);
	printf("length of the both strings are %d and %d respectively.",a1,a2);
	printf("\n");
	int a3= a1+a2+1;
	char c[a3];
	int k=0;

	for(int i=0;i<a1; i++)
	{
		c[i]=a[k];
		k++;
	}
printf("\nSTRING AFTER COPING IS :%s\n",c);
}

void fun3()// ASSCI value of characters
{
	char a='A';
	char b='Z';
	char c='a';
	char d='z';
	char e=' ';
	char f=';';
	printf("ASSCI value of A:%d\n",a);
	printf("ASSCI value of Z:%d\n",b);
    printf("ASSCI value of a:%d\n",c);
    printf("ASSCI value of z:%d\n",d);
    printf("ASSCI value of ' ':%d\n",e);
    printf("ASSCI value of ;:%d\n",f);	
}	

void fun4(char string[]) //Logic bheid strupr
{
	for(int i=0; string[i]!='\0';i++)
	{
		if(string[i]>='a' && string[i]<='z')
		{
			string[i]=string[i]-32;
		}
		else if(string[i]>='A' && string[i]<='Z')
		{
			string[i]= string[i]+32;
		}
		else
			printf("%s\n",string);
	}
}
void lower(char string[])//logic behind strlwr
 {
 	for(int i=0;string[i] !='\0';i++)
 	{
 	if (string[i]>='A' && string[i]<='Z')
    {
    	string[i] =  string[i] + 32;
    }
 }
}

void concatenate()//concatenate means add two strings 
{
	char str1[100], str2[100], str3[100];
	int i=0;
	int j=0;
	printf("Enter the string 1:\n");
	scanf("%s",str1);
	printf("Enter the string 2:\n");
	scanf("%s",str2);
	int a1= strlen(str1);
	int a2= strlen(str2);

	//code to insert string 1 into the new string
	for(i=0; i<a1;i++)
    {
    	str3[i]=str1[i];
    	//i++;//[fasad ki jarrr]
    }
    // code to insert the second string into the new string
    for(j=0 ; j<a2;j++)
    {
    	str3[i]=str2[j];
    	i++;
    }
    //condition for null
    str3[i] ='\0';
    //print desire output
    printf("Output:%s\n",str3);
}

void reverse() //Logic behind [strrev]
{
	char a[100]="hello";
	char temp;
	int i =0 ,j=0;
	i=0;
	j=strlen(a)-1; //length-1
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("Reversed string is : %s\n",a);
}
int main()
{
	char string[100];
	fun1();
	fun2();
	fun3();
	printf("Enter the string:\n");
	scanf("%s",string);
	fun4(string);
	printf("string after strupr:%s\n",string);
	printf("\n");
	printf("Enter the string in capital Letters:\n");
	scanf("%s",string);
	lower(string);
	printf("string after strlwr:%s\n",string);
	printf("\n");
	concatenate();
	reverse();
}
