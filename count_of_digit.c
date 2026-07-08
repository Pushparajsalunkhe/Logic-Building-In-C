#include<stdio.h>
int count(int num)
{
	if(num==0)
	{
		return 0;
	}
	return 1+count(num/10);
}
int main()
{
	int n;
	printf("Enter The Number");
	scanf("%d",&n);
	printf("Count Of Digit is:-%d",count(n));
}
