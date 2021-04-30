//A3q2

#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("\nEnter 2nd number ");
	scanf("%d",&b);
	printf("\nEnter 3rd number ");
	scanf("%d",&c);
	if (a>=b && a>=c)
	printf("\n%d is greatest",a);
	else if (b>=a && b>=c)
	printf("\n%d is greatest",b);
	else if (c>=a && c>=a)
	printf("\n%d is greatest",c);
	
	(a>=b)? ((a>=c)?printf("\ngreatest: %d ",a):printf("\n greatest: %d ",c)) : ((b>=c)? printf("\ngreatest: %d ",b):printf("\n greatest: %d ",c));  

}
