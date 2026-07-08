// gets
// puts

#include<stdio.h>
int main()
{
	char str[100];
	
	printf("Enter String:-");
	// scanf("%s",&str);
	gets(str);
	
	printf("String:-");
	puts(str);
	
	
	int len = strlen(str);
	
	printf("%d \n",len);
	
	printf("%s \n",strupr(str));
	
	printf("%s",strlwr(str));
	
	
}
