//A3q9(primeornot)

#include<stdio.h>

int main()
{
	//PrimeOrNot
	int n, i=2,z = 0;
	printf("Enter number for prime: ");
	scanf("%d", &n);

/*	
	for (i = 2;i<(n/2);i++)
		if (n%i==0)
			{
				printf("Yay! %d is divisible by %d, not prime! ",n,i);
				z = 1;
				break;
			}
		else
			continue;
if (n == 1)
		printf("1 is a unique number");			
else if (z ==0)	
	printf("Number was prime!");
		*/	

do
{	if (n%i==0)
			{
				printf("Yay! %d is divisible by %d, not prime! ",n,i);
				z = 1;
				break;
			}
		else
			i+=1;
	
}while (i<n);

if (n == 1)
		printf("1 is a unique number");			
else if (z ==0)	
	printf("Number was prime!");
 
 }
 
