#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter the number: ");
	scanf("%d", &a);
	b = a/100;
	c = (a/10)%10;
	d = a%10;
	
	printf("Original number is : %d\nSum of digits: %d\nProduct of digits: %d",a,b+c+d,b*c*d);
	return 0;
}
