#include<stdio.h>
int evod(int);
int main()
{
	int n,result;
	printf("enter the number:");
	scanf("%d",&n);
	result=evod(n);
	return 0;
}
int evod(int n)
{
	if(n%2==0)
	{
		printf("this number is even number:%d",n);
	}
	else
	{
		printf("this number is odd number:%d",n);
	}
}

