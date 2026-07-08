#include<stdio.h>
int main()
{
	int r,c;
	char ch='A';
	for(r=0;r<5;r++)
	{
		for(c=0;c<5;c++)
		{
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	
	}
}
