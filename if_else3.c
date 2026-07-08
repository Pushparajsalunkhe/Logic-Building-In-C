#include<stdio.h>
int main()
{
	int num;
	printf("Enter The Number");
	scanf("%d",&num);
	if(num%5==0)
	{
		printf("%d Is Divisible By 5",num);
	}
	else
	{
		printf("%d Is Not Divisible By 5",num);
	}
}
