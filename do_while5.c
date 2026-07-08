//Calculate the sum of numbers from 1 to N

#include<stdio.h>
int main()
{
	int num=1;
	int sum=0;
	do{
		sum=sum+num;
		num++;
	}
	while(num<=10);
	printf("%d \n",sum);
}
