#include<stdio.h>
main()
{
	printf("Enter marks: ");
	int marks=0;
	scanf("%d",&marks);
	
	if(marks>=85)
	{
		printf("Grade A");
	}
	if(marks>=70 && marks<85)
	{
		printf("Grade B");
	}
	if(marks>=55 && marks<69)
	{
		printf("Grade C");
	}
	if(marks>=40 && marks<54)
	{
		printf("Grade D");
	}
	if(marks<40)
	{
		printf("Grade F");
	}
}
