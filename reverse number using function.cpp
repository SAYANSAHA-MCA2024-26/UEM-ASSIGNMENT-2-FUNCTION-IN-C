#include<stdio.h>
int reverse(int n);
int main()
{
	int n,rev;
	printf("enter the number:");
	scanf("%d",&n);
	rev=reverse(n);
	printf("the reverse number is:%d",rev);
}
int reverse(int n)
{
	int rev1=0,rem;
	while(n>0)
	{
		rem=n%10;
		rev1=rev1*10+rem;
		n=n/10;
	}
	return rev1;
}
