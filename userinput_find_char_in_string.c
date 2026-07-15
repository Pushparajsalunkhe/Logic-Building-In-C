#include<stdio.h>
int main()
{
	char str[7]="fortune";
	char ch;
	printf("Enter The Char:-");
	scanf("%c",&ch);
	int i;
	for(i=0;i<7;i++)
	{
		if(ch==str[i])
		{
			printf("%d",i);
		}
	}
}
