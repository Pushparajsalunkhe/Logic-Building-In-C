#include<stdio.h>
union emp{
	int id;
	char name[20];
	float num;
} e1;

int main(){
	int id;
	char name[20];
	float num;
	
	printf("Enter Id:");
	scanf("%d",&id);
	
	printf("Enter Name:");
	scanf("%s",&name);
	
	printf("Enter Num:");
	scanf("%f",&num);
	
	e1.id=id;
	strcpy(e1.name,name);
	e1.num=num;
	
	printf("Id=%d",e1.id);
	printf("\nName=%s",e1.name);
	printf("\nNumber=%f",e1.num);
}
