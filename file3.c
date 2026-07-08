#include<stdio.h>
int main()
{
	FILE *ab;
	ab=fopen("data.txt","w+");
	fputs("This is Mansoon",ab);
	
//	fseek(ab,3,SEEK_SET);
//	fputs("HELLO",ab);

    fseek(ab,0,SEEK_END);
    int length=ftell(ab);
    
    printf("%d bytes",length);
	
	fclose(ab);
}
