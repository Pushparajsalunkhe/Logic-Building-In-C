//  parameterize function

#include <stdio.h>
int c;           // c is global variable
int add(int a,int b) //a and b are paramenter /Local Variable
{      int c=a+b;     // c is a local variable
       printf("%d",c);
	
}
int main()
{
	add(56,4);      //56,4 are arguments
	printf("%d",c);
}
