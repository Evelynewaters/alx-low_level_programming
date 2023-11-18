#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	return (a + b);
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
int divide(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero\n");
		exit(EXIT_FAILURE);
	}
}
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		exit(EXIT_FAILURE);
	}
}
int main()
{
	int a = rand() % 222 - 111;
	int b = rand() % 222 - 111;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d x %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %d\n", a, b, divide(a, b));
	printf("%d %% %d = %d\n", a, b, mod(a, b));
	return (0);
}
