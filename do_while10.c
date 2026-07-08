#include<stdio.h>
int main()
{
	int i=1;
	int num;
	printf("Enter The Number");
	scanf("%d",&num);
	
	do{
		printf("%d \n",num*i);
		i++;
	}
	while(i<=10);
}
