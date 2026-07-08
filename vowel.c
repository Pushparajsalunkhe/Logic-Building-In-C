#include<stdio.h>
char main() {
	char ch;
	printf("Enter a Character:-");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("Vowel");
	}
	
	else
	{
		printf("Not Vowel");
	}
}
