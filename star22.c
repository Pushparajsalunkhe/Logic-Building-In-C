#include<stdio.h>
int main()
{
	int r,c,s;
	char str='a';
	for(r=0;r<5;r++)
	{
		for(s=2;s<2*(5-r);s++)
		{
			printf(" ");
		}
		for(c=0;c<=r;c++)
		{
			printf("%c ",str);
			str++;
		}
		printf("\n");
	}
}
