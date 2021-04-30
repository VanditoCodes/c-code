#include<stdio.h>
int main()
{	float a,b;
	int c;
	printf("Enter 1st number: ");
	scanf("%f", &a);
	printf("Enter 2nd number: ");
	scanf("%f", &b);
	c = (int) a+b;
	printf("Value of c: %d \n",c);
	printf("Value of a: %f \n",a);
	printf("Value of b: %f \n",b);
}
