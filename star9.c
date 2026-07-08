#include<stdio.h>
int main()
{
	int r,c;
	char ch='a'; //asscci value //a=97
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%c",ch);
			ch++; //ch=ch+1 //ch=97+1=98
		}
		printf("\n");
	}
}
