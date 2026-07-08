#include<stdio.h>
int main()
{
	int num=1;
	int r,c;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",num);
			
			num++;
		}
		printf("\n");
	}
}
