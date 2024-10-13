#include<stdio.h>
int maximum(int,int);
int minimum(int,int);
int main()
{
	int a,b,max,mini;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	max=maximum(a,b);
	mini=minimum(a,b);
	printf("maximum value:%d\n",max);
	printf("minimum value:%d",mini);
}
int maximum(int a,int b)
{
	int maximum;
	if(a>b)
	{
		maximum=a;
		return maximum;
	}
	else
	{
		maximum=b;
		return maximum;
	}
}
int minimum(int a,int b)
{
	int minimum;
	if(a>b)
	{
		minimum=b;
		return minimum;
	}
	else
	{
		minimum=a;
		return minimum;
	}
}
