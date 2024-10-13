#include<stdio.h>
int natnum(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n%10+natnum(n/10);
	}
}
int main()
{
	int n,num;
	printf("enter the number:");
	scanf("%d",&n);
	num=natnum(n);
	printf("sum of digits is:%d",num);
}
