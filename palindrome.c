#include<stdio.h>
int main()
{
	int num,rem,re=0;
	printf("Enter The Number:");
	scanf("%d",&num);
	int n=num;
	while(num!=0)
	{
		rem=num%10;
		re=re*10+rem;
		num=num/10;
	}
	
	if(n==re)
	{
		printf("%d is Palindrome Number",re);
	}
	else
	{
		printf("%d is Not Palindrome Number",re);
	}
}
