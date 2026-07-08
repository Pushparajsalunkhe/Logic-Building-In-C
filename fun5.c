#include <stdio.h>
int add(int a,int b){
	
	int c=a+b;
	printf("%d \n",c);
	
}

int mul(int a,int b){
	
	int c=a*b;
	printf("%d \n",c);
	
}

int sub(int a,int b){
	
	int c=a-b;
	printf("%d \n",c);
	
}

int div(int a, int b){
	
	int c=a/b;
	printf("%d \n",c);
	
}

int main()
{
	add(12,10);
	mul(5,10);
	sub(30,10);
	div(40,10);
}
