#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter first number (a): ");
	scanf("%d", &a);
	printf("Enter second number (b): ");
	scanf("%d", &b);
	printf("Enter third number (c): ");
	scanf("%d", &c);
	
	a = a+b+c;
	b = a-b-c;
	c = a-b-c;
	a = a-b-c;
	printf("New value of a is %d and new value of b is %d and new value of c is %d",a,b,c);
	return 0;
}
