#include<stdio.h>
int main()
{
	FILE *ab;
	
	ab=fopen("hello.txt","w");
	
	printf("Enter The String:");
	put(ab);
	
	fprintf("%s",ab);
	
	fclose(ab);
	
    char data[200];
    
	ab=fopne("hello.txt","r")
	
	while(fscanf(ab,"%s",data)!=EOF) // EOF:- end of file 
	{
		printf("%s ",data);
	}
    	
}
