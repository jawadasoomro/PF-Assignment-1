#include<stdio.h>
#include<conio.h>

int main()
{
	int maths,urdu,bio,average;
	char Grade;
	
	printf("Enter marks of maths =");
	scanf("%f",&maths);
	printf("Enter marks of urdu =");
	scanf("%f",&urdu);
	printf("Enter marks of bio =");
	scanf("%d",&bio);
	average = ( maths + urdu + bio)/3;
	
	if(average >= 90);
	
	{
		Grade = 'A';
	}
	elseif (average >= 80);
	{
		Grade = 'B';
	}
	elseif (average >= 70);
	{
		Grade = 'C';
	}
	elseif (average >= 60);
	{
		Grade = 'D';
	}
	elseif (average >=50);
	{
		Grade = 'E';
	}
	else 
	{
		Grade = 'F';
	}
	printf("Average marks :%.2f\n",average);
	printf("Grade : %c\n",Grade);
	
	return 0;
}
