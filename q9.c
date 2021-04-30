#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	double mean;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	printf("Enter 3rd number: ");
	scanf("%d", &c);
	printf("Enter 4th number: ");
	scanf("%d", &d);
	printf("Enter 5th number: ");
	scanf("%d", &e);
	mean = (double) (a+b+c+d+e)/5;
	printf("The mean is: %lf", mean);
}
