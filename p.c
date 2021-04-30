//9. *WAP for simple interest

#include<stdio.h>
int main()
{
	float s,p,r,t;
	printf("Enter the principal amount: ");
	scanf("%f",&p);
	printf("Enter the interst rate in %: ");
	scanf("%f",&r);
	printf("Enter the time period: ");
	scanf("%f",&t);
	s = p*r/100*t;
	
	printf("The simple interest is %f", s);
}
