#include<stdio.h>
int main()
{
	int num1=55;
	int num2=100;
	
	printf("Before Swap \n");
	printf("num1:%d\n",num1);
	printf("num2:%d\n",num2);
	
	num1=num1+num2; // 55+100 = 155
	num2=num1-num2; // 155-100 = 55
	num1=num1-num2; // 155-55 = 100
	
	printf("After Swap \n");
	printf("num1:%d\n",num1);
	printf("num2:%d\n",num2);
	
	
}
