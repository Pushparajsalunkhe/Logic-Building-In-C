#include<stdio.h>
int num(n)
{   
    int t=n;
    int value=0,f;
	while(n!=0)
	{
		f=n%10;
		value=value+(f*f*f);
		n/=10;
	}
	if (value==t)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not Armstrong Number");
	}
}
int main()
{  
   int n;
   printf("Enter a Number:");
   scanf("%d",&n);
   num(n);	
}
