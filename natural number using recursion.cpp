#include<stdio.h>
int natnum(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n+natnum(n-1);
	}
}
int main()
{
	int n,num;
	printf("enter the natural number range:");
	scanf("%d",&n);
	num=natnum(n);
	printf("the natural number is:%d",num);
}
