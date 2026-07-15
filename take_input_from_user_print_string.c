#include<stdio.h>
int main()
{
	char str[50];
	
	printf("Enter The String:-");
	fgets(str,sizeof(str),stdin);
	
	printf("Your String is:-%s",str);
}
