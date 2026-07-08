#include<stdio.h>
int main()
{
	int i=1;
	int num;
	printf("Enter The Number");
	scanf("%d",&num);
	while(i<=10)
	{
		printf("%d = %d \n",i,i*num);
		
		i++;
	}
}
