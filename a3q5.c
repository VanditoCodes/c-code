//A3q5

#include<stdio.h>

int main()
{
	int a;
	printf("Enter number: ");
	scanf("%d",&a);
	
	if (a%2 == 0)
		printf("%d is even\n",a);
	else 
		printf("%d is odd\n",a);
		
	(a%2==0)? printf("%d is even\n",a): printf("%d is odd\n",a);
	
	if (a<0)
		printf("%d is negative\n",a);
	else 
		printf("%d is positive\n",a);
		
	(a<0)? printf("%d is negative",a): printf("%d is positive\n",a);
}
