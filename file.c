#include<stdio.h>
//int main()
//{
//	FILE *ab;
//	
//	ab=fopen("data.txt","w"); // file create and writting mode
//	
//	fprintf(ab,"Hello this is rainy season"); //printing on file
//	
//	fclose(ab); // file close
//}
 
 
 
 
int main()
{
	FILE *ab;
	char data[100];
	
	ab=fopen("data.txt","r");
	
	while(fscanf(ab,"%s",data)!=EOF) // EOF:- end of file 
	{
		printf("%s ",data);
	}
	
	printf("\n");
	rewind(ab);
	
	while(fscanf(ab,"%s",data)!=EOF) // EOF:- end of file 
	{
		printf("%s ",data);
	}
}
