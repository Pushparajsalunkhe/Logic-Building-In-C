#include<stdio.h>
int main(){
	int marks;
	printf("Enter the Marks");
	scanf("%d",&marks);
	
	if(marks >=80 )
	{
		printf("A Gread");
	}
	
	else if(marks>=60)
	{
		printf("B Gread");
	}
	
	else if(marks>= 45)
	{
		printf("C Gread");
	}
	
	else{
		printf("Fail");
	}
	
}

