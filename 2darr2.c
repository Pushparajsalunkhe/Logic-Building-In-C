#include<stdio.h>
int main()
{
	char arr[5][6]={{'A','B','C','D','E','F'},{'G','H','I','J','K','L'},{'M','N','O','P','Q','R'},{'S','T','U','V','W','X'},{'Y','Z','*','*','*','*'}};
    
    int i,j;
    for (i=0;i<5;i++)
    {
    	for (j=0;j<6;j++)
    	{
    		printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
}
