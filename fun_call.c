// call by value 

#include<stdio.h>
int display(int p, int q)
{
	printf("\n Before Fun Call p=%d",p);
	printf("\n before fun Call q=%d",q);
	
	p=p+1;
	q=q+1;
	
	printf("\n After Fun Call p=%d",p);
	printf("\n After Fun Call q=%d",q);
	
}

int main()
{
	int a=4;
	int b=5;
	printf("Before Fun Call a=%d",a);
	printf("\n Before Fun Call b=%d",b);
	
	display(a,b);  // function call by a,b value
	
	printf("\n After Fun Call a=%d",a);
	printf("\n After Fun Call b=%d",b);
	
	
	
}
