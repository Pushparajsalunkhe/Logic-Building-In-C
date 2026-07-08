#include<stdio.h>
int main()
{
	int c,r;
	for(r=0;r<5;r++) //0
	{
		for(c=0;c<=r;c++) //0<=0 true //1<=0 flase 
		{
			printf("*");
		}
		printf("\n");
	}
}
