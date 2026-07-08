#include<stdio.h>
char main()
{
	char ch;
	printf("Enter Your Age");
	scanf("%c",&ch);
	
	if (ch>='A' && ch<='Z')
	{
		printf("UpperCase Letter");
	}
	else{
		printf("LowerCase Letter");
	}
}
