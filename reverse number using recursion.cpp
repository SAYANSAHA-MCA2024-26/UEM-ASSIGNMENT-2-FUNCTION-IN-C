#include<stdio.h>
int rev=0,rem;
int natnum(int n)
{
	if(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		natnum(n/10);
		return rev;
	}
	else
	{
		return rev;
	}
	return rev;
}
int main()
{
	int n,num;
	printf("enter the number:");
	scanf("%d",&n);
	num=natnum(n);
	printf("the reverse number is:%d",num);
}
