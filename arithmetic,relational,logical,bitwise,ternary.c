#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);
	printf("Sum of the two numbers is: %d\n",a+b);
	printf("Difference of the two numbers is: %d\n",a-b);
	printf("Product of the two numbers is: %d\n",a*b);
	printf("Quotient of the two numbers is: %d and remainder is: %d\n\n",a/b,a%b);
	
	printf("Pre increment of a is %d\n",++a);
	printf("Post increment of a is %d\n",a++);
	printf("New value of a is %d\n\n",a);
	
	printf("Pre decrement of b is %d\n",--b);
	printf("Post decrement of b is %d\n",b--);
	printf("New value of b is %d\n\n",b);
	
	printf("For the following, \'0\' implies false and \'1\' implies true.\n");
	printf("Is 1st number equal to the 2nd number? %d\n",a==b);
	printf("Is 1st number greater than the 2nd number? %d\n",a>b);	
	printf("Is 2nd number greater than the 1st number? %d\n",b>a);
	printf("Are both numbers different(unequal)? %d\n\n",a!=b);

	int c,d;
	printf("Enter 1st number:");
	scanf("%d",&c);
	printf("Enter 2nd number:");
	scanf("%d",&d);
	
	printf("Testing &&: %d\n",c&&d);
	printf("Testing ||: %d\n",c||d);
	printf("Testing ! for 2nd number: %d\n\n",!c);
	
	printf("Testing &: %d\n",c&d);
	printf("Testing |: %d\n",c|d);
	printf("Testing ^: %d\n",c^d);
	printf("Testing left shift: %d\n",c<<d);	
	printf("Testing right shift: %d\n",c>>d);
	printf("Testing ~ for 2nd number: %d\n",~d);	
	
	(c>d)? printf("c is greater"):("d is greater");
		
	return 0;
}

