#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2,num3;
	printf("Enter three numbers.\n :");
	printf("Number 1 :");
	scanf("%d",&num1);
	printf("Number 2 :");
	scanf("%d",&num2);
	printf("Number 3 :");
	scanf("%d",&num3);
	
	if (num1 >= num2){
		if (num1 >= num2) 
		{
			printf("The largest number is : %d\n",num1);
		}
		else 
		{
			printf("The largest number is :%d\n",num3);
		}
	}
	if (num2 >= num3){
		printf("The largest number is :%d\n",num2);
	}
	else
	{
		printf("The largest number is :%d\n",num3);
	}
	return 0;
}
