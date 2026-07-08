#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int value,i;
	
	printf("Enter Value:");
	scanf("%d",&value);
	
	for (i=0;i<5;i++)
	{
		if(arr[i]==value)
		{
			printf("Index:-%d",i);
			return 0;
		}
	}
//	printf("\nIndex Not Found");
}
