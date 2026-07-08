#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5};
	int value,index;
	int i;
	printf("Enter The value:-");
	scanf("%d",&value);
	printf("Enter The index:-");
	scanf("%d",&index);
	
	if(index<5)
	{
	     for(i=5;i>index-1;i--) //i=5 ; 5>3-1=true i=4 ; 4>3-1=true i=3 ; 3>3-1=true i=2 ; 2>3-1=false
	     {
	     	arr[i]=arr[i-1];
		 }
		 arr[index]=value;
    }
   	
//	arr[5]=arr[4];
//	arr[4]=arr[3];
//	arr[3]=value;
        for(i=0;i<6;i++)
	    {
	     	printf("%d",arr[i]);
	    }
 	
}
