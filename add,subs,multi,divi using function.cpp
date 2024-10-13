#include<stdio.h>
int sum(int,int);
int subs(int,int);
int multi(int,int);
int divide(int,int);
int main()
{
	int a,b,add,subs1,multi1,divi;
	printf("enter the 1st number:");
	scanf("%d",&a);
	printf("enter the 1st number:");
	scanf("%d",&b);
	add=sum(a,b);
	subs1=subs(a,b);
	multi1=multi(a,b);
	divi=divide(a,b);
	printf("sum:%d\n",add);
	printf("subtraction:%d\n",subs1);
	printf("multiply:%d\n",multi1);
	printf("divide:%d\n",divi);
}
int sum(int a,int b)
{
	int sum=0;
	sum=a+b;
	return sum;
}
int subs(int a,int b)
{
	int subs=0;
	subs=a-b;
	return subs;
}
int multi(int a,int b)
{
	int multi;
	multi=a*b;
	return multi;
}
int divide(int a,int b)
{
	int divide=0;
	divide=a/b;
	return divide;
}
