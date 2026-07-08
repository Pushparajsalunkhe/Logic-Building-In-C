#include<stdio.h>
int main()
{
	int row ;
	int cols;
	int even;
	int odd;
	int r,c;
	
	printf("Enter No of Rows:");
	scanf("%d",&row);
	
	printf("Enter No of Cols:");
	scanf("%d",&cols);
	
	printf("Enter No For Even:");
	scanf("%d",&even);
	
	printf("Enter No For Odd");
	scanf("%d",&odd);
	
	for(r=0;r<row;r++)
	{
		for(c=0;c<cols;c++)
		{
			if(r%2==0)
			{
				printf("%d",even);
			}
			else
			{
				printf("%d",odd);
			}
		}
		printf("\n");
	}
}
