#include<stdio.h>
extern d = 15;
int main()
{
	auto int a = 7;
	printf("Value of auto int a is %d \n",a);
	static b = 8;
	printf("Valye of static b is %d \n",b);
	register char h = 'L';
	printf("Value of register char h is %c \n",h);
	printf("Value of external d is %d \n",d);
	
	return 0;
}
