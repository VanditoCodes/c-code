//A3q7

#include<stdio.h>

int main()
{
	int a;
	printf("Enter number of days after deadline: ");
	scanf("%d",&a);
	
	if (a<=5)
		printf("Your fine is 50 paisa! Pay quick!");
	else if (a>5)
	{	if (a <=10)
			printf("Your fine is 1 rupee! Pay ASAP!");
		else if (a>10)
			{if (a<30)
				printf("Your fine is 10 rupees! Pay quick or your membership will be cancelled!");
			else if (a>30)
			printf("Your membership has been cancelled!!");
			}}
		
return 0;
	
}
