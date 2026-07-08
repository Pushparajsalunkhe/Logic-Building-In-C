#include<stdio.h>
//int main()
//{
//	FILE *fp;
//	fp=fopen("file.txt","w"); // openinf file
//	
//	fputc('a',fp); // writting single char into file
//	
//	fclose(fp); // closing file
//	
//}


int main()
{
	FILE *fp;
	char s;
	
	fp=fopen("file.txt","r");
	
	while((s=fgetc(fp))!=EOF)
	{
		printf("%c",s);
	}
	fclose(fp);
}
