#include<stdio.h>
int main()
{   
    int r,c; 
	for (r=0;r<5;r<r++)
	{
		for (c=0;c<5;c++)
		{
			if(r==1 || r==3 || c==1 || c==3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
