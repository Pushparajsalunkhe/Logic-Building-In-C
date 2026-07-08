#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int i;
	int ind;
	printf("Enter The Index:");
	scanf("%d",&ind);
	
	for(i=0;i<5;i++)
	{
	    if(i==ind)
	{
		printf("Index Value:-%d",arr[i]);
	}
	
    }
}
