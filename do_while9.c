#include <stdio.h>
int main()
{
	int num=1;
	do{
		if(num%3==0 && num%5==0)
		{
			printf("%d \n",num);
		}
		num++;
	}
	while(num<=100);
}
