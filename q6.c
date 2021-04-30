//6. WAP to add, subtract, multiply, divide numbers.
#include<stdio.h>

int main()
{
	float n1, n2, sum, diff, p, q;
	printf("Enter two numbers: ");
	scanf("%f%f", &n1, &n2); 										//input
	
	sum = n1 + n2;													//operators 
	diff = n1-n2;
	p = n1*n2;
	q = n1/n2;
	
	printf("Sum of the two numbers= %f",sum);						//printing result
	printf("\nDifference of the two numbers= %f",diff);
	printf("\nProduct of the two numbers= %f",p);
	printf("\nQuotient of the two numbers= %f",q);
	return 0;
}
