#include<stdio.h>
int main()
{
	int r,c;
	for(r=5;r>=1;r--) //5 4 3 2 1 
	{
		for(c=1;c<=r;c++) // 0<=5 true, 1<=5 true, 2<=5 true, 3<=5 true, 4<=5 true, 5<=5 true, 6<=5 false
		{
			printf("*");
		}
		printf("\n");
	}
}
