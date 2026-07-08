#include<stdio.h>
int rev(int num)
{
	if (num==0)
	{
		return;
	}
	printf("%d \n",num);
	rev(num-1);
}
int main()
{
    int n;
	printf("Enter The Number");
	scanf("%d",&n);
	rev(n);	
}
