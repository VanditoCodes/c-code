//10. WAP for compound interest.
#include<stdio.h>
int main()
{
	float s,p,r,t,a;
	printf("Enter the principal amount: ");
	scanf("%f",&p);
	printf("Enter the interst rate in %: ");
	scanf("%f",&r);
	printf("Enter the time period: ");
	scanf("%f",&t);
	a = 1+(r/100);
	s = p*(pow(a,t));
	printf("The final amount is %f", s);
	
}
