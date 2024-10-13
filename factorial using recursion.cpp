#include<stdio.h>
int f1(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*f1(n-1);
	}
}
int main()
{
	int n,fact;
	printf("enter the number:");
	scanf("%d",&n);
	fact=f1(n);
	printf("the number is factorial:%d",fact);
}
