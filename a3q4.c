//A3q3

#include<stdio.h>

int main()
{
	char c;
	printf("Enter character: ");
	scanf("%c",&c);
	if (c>=65 && c<=90)
	printf("\nEntered character %c is in uppercase",c);
	else if(c>=97 && c<=122)
	printf("\nEntered character %c is in lowercase",c);
	else
	printf("\nEntered character %c is special symbol",c);
}
