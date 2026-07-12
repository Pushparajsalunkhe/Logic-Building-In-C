#include<stdio.h>
int main()
{   // Upper pyramide
	int r,c,s;
	for(r=0;r<5;r++)
	{
		for(s=0;s<(5-r)-1;s++) // (5-0)-1=4 // (5-1)-1=3 // (5-2)-1=2 // (5-3)-1=1 // (5-4)-1=0 
		{
	
			printf(" ");
		}
		
		for(c=0;c<(2*r)+1;c++) // 2*0+1=1 // 2*1+1=3 // 2*2+1=5 // 2*3+1=7 // 2*4+1=9
		{
			printf("*");
		} 
		printf("\n");  
	}
	  // inverted pyramid
	for (r=4;r>=1;r--)
	{
		for (s=1;s<=(5-r);s++)
		{
			printf(" ");
		}
		
		for (c=1;c<=(2*r-1);c++)
		{
			printf("*");
		}
		printf("\n");
	}
}


