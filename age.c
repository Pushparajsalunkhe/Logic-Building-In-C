#include <stdio.h>
int main(){
	int age;
	printf("Enter your Age");
	scanf("%d",&age);
	
	if(age == 15)
	{
		printf("You are Aplicable for SSC");
	}
	
	else if (age == 18)
	{
		printf("You are Aplicable for HSC");
		
	}
	
	else if (age == 21)
	{
		printf("You are Aplicable for Degree");
	}
	
	else if (age >= 22)
	{
		printf("You are Aplicable for fortune cloud");
	}
	
	else{
		printf("Go and Study");
	}
}
