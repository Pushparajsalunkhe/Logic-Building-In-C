#include<stdio.h>
int main()
{
	int size;
	printf("Enter The Array Size:-");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter The Element:-");
	int i;
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Array Element Is:-");
	for (i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
}
