//A3q*

#include<stdio.h>

int main()
{
	float a,b,c,d,e,total,average,percentage;
	printf("Enter marks for 1st subject(out of 100): ");
	scanf("%f",&a);
	printf("\nEnter marks for 2nd subject(out of 100): ");
	scanf("%f",&b);
	printf("\nEnter marks for 3rd subject(out of 100): ");
	scanf("%f",&c);
	printf("\nEnter marks for 4th subject(out of 100): ");
	scanf("%f",&d);
	printf("\nEnter marks for 5th subject(out of 100): ");
	scanf("%f",&e);
	total = a+b+c+d+e;
	average = total/5;
	percentage = total/5;
	printf("\nTotal marks are %f ", total);
	printf("\nAverage marks are %f ", average);
	printf("\nPercentage is %f ", percentage);
	if (percentage>90)
	printf("\nYay! First division!!");
	else if (percentage>80)
	printf("\nNot bad! Second division!!");
	else if (percentage>70)
	printf("\nDecent! Third division!!");
	else if (percentage>60)
	printf("\nWork harder! Fourth division!!");
	else
	printf("\nOh no! Fifth division!! You have failed!");
}
