#include<stdio.h>
int main()
{
	int age;
	printf("Enter Your Age");
	scanf("%d",&age);
	
	if (age <=18)
	{
		printf("A Person is Child");
	}
	else{
		printf("A Person is Adult");
	}
}
