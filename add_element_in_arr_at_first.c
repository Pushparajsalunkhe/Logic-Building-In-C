#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5};
	int ele,i;
	printf("Enter The Element:-");
	scanf("%d",&ele);
	for (i=5;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
//	arr[5]=arr[4]; arr[i]=arr[i-1]
//	arr[4]=arr[3];
//	arr[3]=arr[2];
//	arr[2]=arr[1];
//	arr[1]=arr[0];
    arr[0]=ele;
    for (i=0;i<6;i++)
	 {
	 	printf("%d",arr[i]);
	 }
}
