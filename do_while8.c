//Find factorial of a number

#include<stdio.h>
int main()
{
	int num=5;
	int fact=1;
	do{
		fact=fact*num;
		num--;
	}
	while(num>=1);
	
	printf("Facter of 5! = %d",fact);
	
}
