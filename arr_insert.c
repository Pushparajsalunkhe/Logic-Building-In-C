#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5};
	int i;
	printf("Before Insert:-");
	for (i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d",arr[i]);
	}
	printf("\nAfter Insert:-");
	arr[5]=6;
	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d",arr[i]);
	}
	
	
}
