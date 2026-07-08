#include<stdio.h>
int even(int num)
{
	if(num<=0){
		return 0;
	}
	
	if (num%2==0)
	{
		return num+even(num-2);
	}
	else
	{
		return even(num-1);
	}
}

int main()
{
	int n;
	printf("Enter The Number");
	scanf("%d",&n);
	printf("Squre Addition is:- %d:",even(n));
}
