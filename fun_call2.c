#include<stdio.h>
int display(int *p, int *q)    // holds the add of another variable
{
	printf("\n Before Updation p=%d",*p);
	printf("\n Before Updation q=%d",*q);
	
	*p=*p+1;
	*q=*q+1;
	
	printf("\n After Updation p=%d",*p);
	printf("\n After Updation q=%d",*q);
	
}

int main()
{
	int a=4;
	int b=5;
	
    printf("\n Before Updation a=%d",a);
	printf("\n Before Updation b=%d",b);
	
	display(&a,&b);
	
	printf("\n After Updation a=%d",a);
	printf("\n After Updation b=%d",b);
	
	
}
