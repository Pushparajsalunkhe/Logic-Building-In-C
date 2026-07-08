//Check whether a number is less than 50, between 50 and 100 and greater than 100

#include <stdio.h>
int main()
{
	int num;
	printf("Enter The Number");
	scanf("%d",&num);
	
	if(num<=50)
	{
		printf("%d is Less Than 50",num);
	}
	else if (num <=100)
	{
		printf("%d is Between 50 To 100",num);
	}
	else
	{
		printf("%d is Greater Than 100",num);
	}
}
