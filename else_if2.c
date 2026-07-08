//Profit or Loss
//Input Cost Price and Selling Price:
//SP > CP ? Profit
//SP < CP ? Loss
//SP = CP ? No Profit No Loss
#include<stdio.h>
int main()
{
	int sp;
	int cp;
	printf("Enter The Selling Price");
	scanf("%d",&sp);
	printf("Enter The Cost Price");
	scanf("%d",&cp);
	
	if(sp>cp)
	{
		printf("Profit");
	}
	else if(sp<cp)
	{
		printf("Loss");
	}
	else
	{
		printf("No Profit No Loss");
	}
}
