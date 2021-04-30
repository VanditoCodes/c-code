//A3q6

#include<stdio.h>

int main()
{
	int a;
	printf("Enter number: ");
	scanf("%d",&a);
	
	if (a%5==0)
	{
		if (a%8==0)
			printf("%d is divisible by 5 and 8\n",a);
		else
			printf("%d is divisible by 5 but not 8\n",a);
	}
	else if (a%8==0)
		printf("%d is divisble by 8 but not 5",a);

	else
		printf("%d is not divisble by 8 or 5",a);
}
