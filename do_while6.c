//Print numbers divisible by 5 from 1 to 100.

#include <stdio.h>
int main()
{
	int num=1;
	
	do{
		if(num%5==0)
		{
			printf("%d \n",num);
		}
		
		num++;
	}
	while(num<=100);
}
