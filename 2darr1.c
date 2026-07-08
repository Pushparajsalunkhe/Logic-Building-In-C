#include<stdio.h>
int main()
{
	char arr[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
	
	int r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%c",arr[r][c]);
		}
		printf("\n");
	}
}
