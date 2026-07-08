#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("Enter The Frist Number");
	scanf("%d",&a);
	printf("Enter The Second Number");
	scanf("%d",&b);
	printf("Enter The Thrid Number");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("%d is Large Number",a);
	}
	else if(b>c)
	{
		printf("%d is Large Number",b);
	}
	else
	{
		printf("%d is Large Number",c);
	}
}
