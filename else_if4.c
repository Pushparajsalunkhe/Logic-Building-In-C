#include<stdio.h>
int main()
{
	int age;
	printf("Enter Your Age:-");
	scanf("%d",&age);
	
	if(age<=10)
	{
		printf("You Are a Child");
	}
	else if(age<=20)
	{
		printf("You Are a Teenager");
	}
	else if(age <=40)
	{
		printf("You Are a Adult");
	}
	else
	{
		printf("You Are a Senior Citizen");
	}
}
