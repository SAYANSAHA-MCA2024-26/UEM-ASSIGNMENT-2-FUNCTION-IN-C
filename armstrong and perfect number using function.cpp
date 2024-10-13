#include<stdio.h>
int armstrong(int);
int perfect(int);
int prime(int);
int main()
{
	int n,arm,per,pri;
	printf("enter the number:");
	scanf("%d",&n);
	arm=armstrong(n);
	per=perfect(n);
	pri=prime(n);
	return 0;
}
int armstrong(int n)
{
	int temp,rem,sum=0;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("this number is armstrong number:%d\n",temp);
	}
	else
	{
		printf("this number is not armstrong number:%d\n",temp);
	}
}
int perfect(int n)
{
	int rem,sum=0,i;
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		printf("this number is perfect number:%d\n",n);
	}
	else
	{
		printf("this number is not perfect number:%d\n",n);
	}
}
int prime(int n)
{
	int flag=0,m,i;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("this number is prime number:%d",n);
	}
	else
	{
		printf("this number is not prime number:%d",n);
	}
}
