//A3q9

#include<stdio.h>

int main()
{
	//FACTORIAL
	int n, i, p = 1,p2 = 1,j=1;
	printf("Enter number for factorial: ");
	scanf("%d", &n);
	for (i = 1;i<=n;i++)
	{
		p = p*i;
	}
	printf("Factorial is %d\n",p);
 	
 	while (j<=n)
 	{
 		p2 = p2*j;
 		j +=1;
	 }
 	printf("Factorial is %d",p2);
 	
 	
 	
 
 }
 
  

