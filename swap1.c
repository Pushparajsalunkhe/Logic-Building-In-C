#include<stdio.h>
int swap(int *a, int *b)
{
	int empty;
	empty=*a;
	*a=*b;
	*b=empty;
	
	return *a,*b;
	
	
}
int main()
{
	int p=10;
	int q=20;
	printf("Before Swap:- p=%d and q=%d \n",p,q);
	swap(&p,&q);
	printf("After Swap:- p=%d and q=%d",p,q);
}
