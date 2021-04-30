#include<stdio.h>

int main()
{
	int pen = 10, pencil = 5, sharpener = 2, t1, t2;
	printf("Item \t\t Price(Rs.) \t\t Total(Rs.) \n__________________________________________________ \n");
	printf("Pen \t\t %d \t\t\t %d \n", pen, 2*pen);
	printf("Pencil \t\t %d \t\t\t %d \n", pencil, 3*pencil);
	printf("Sharpener\t %d \t\t\t %d \n__________________________________________________ \n", sharpener, sharpener);
	printf("Grand Total(Rs.) %d \t\t\t %d \n", pen+pencil+sharpener, 2*pen+3*pencil+sharpener);
}
