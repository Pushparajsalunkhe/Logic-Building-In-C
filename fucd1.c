#include <stdio.h>
int num()
{
	int i=1;
	int num=1;
	for (i=1;i<=5;i++)
	{
		num=num * i;
	}
	printf("5 Facter is:-%d ",num);
	
}
int main()
{
	num();                                                 
}
