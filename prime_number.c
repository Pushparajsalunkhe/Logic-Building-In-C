#include<stdio.h>
int main()
{
	int num;
	printf("Enter The Element:");
	scanf("%d",&num);
	int i=1,c=0;
	while (i<=num)
	{
		if(num%i==0)
		{
			c+=1;
		}
		i++;
	}
	
	if(c==2)
	{
		printf("%d is prime Number",num);
	}
	else
	{
		printf("%d is Not Prime Number",num);
	}
}
