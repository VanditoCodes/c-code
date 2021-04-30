//q1: WAP to find roots of quadratic equation

#include<stdio.h>
#include<math.h>

int main()
{
	float A,B,C,x,d,z,y1,y2;
	printf("Quadratic equation is in the form of Ax^2+Bx+C \n");
	printf("Enter value for A: ");
	scanf("%f",&A);
	printf("Enter value for B: ");
	scanf("%f",&B);
	printf("Enter value for C: ");
	scanf("%f",&C);
	x = pow(B,2);
	z = x-(4*A*C);
	d = pow(z,0.5);
	y1 = (-B/(2*A))+(d/(2*A));
	y2 = (-B/(2*A))-(d/(2*A));
	printf("The value of 1st root =  %f \n", y1);
	printf("The value of 2nd root = %f \n", y2);
	return 0;
}
