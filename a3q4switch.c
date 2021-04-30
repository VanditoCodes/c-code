//A3q3 - Switch
#include<stdio.h>

int main()
{
	int a,b;
	char c;
	printf("Enter operation: ");
	scanf("%c", &c);
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	
	switch(c)
	{
		case '+':
			printf("Sum of the numbers is %d",a+b);
			break;
		case '-':
			printf("Difference of the numbers is %d",a-b);
			break;
		case '*':
			printf("Product of the numbers is %d",a*b);
			break;
		case '/':
			printf("Quotient of the numbers is %d",a/b);
			break;
		case '%':
			printf("Remainder when divided is %d",a%b);
			break;

	}
return 0;
}
