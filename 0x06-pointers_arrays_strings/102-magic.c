#include <stdio.h>
/**
 * main -  magic file function
 * Return: 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &a[2];
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	printf("a[2] = %d\n", *(p + 3) - 4);
	return (0);
}
