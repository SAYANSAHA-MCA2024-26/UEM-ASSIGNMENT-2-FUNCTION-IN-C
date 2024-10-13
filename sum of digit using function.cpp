#include<stdio.h>
int sod(int);
int main()
{
	int n,sod1;
	printf("enter the number:");
	scanf("%d",&n);
	sod1=sod(n);
	printf("sum of digit:%d",sod1);
}
int sod(int n)
{
	int sum=0,rem;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n=n/10;
	}
	return sum;
}
