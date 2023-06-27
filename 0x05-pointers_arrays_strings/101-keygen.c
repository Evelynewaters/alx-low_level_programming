#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum = 0;
	char password[84];

	srand(time(0));

	for (i = 0; i < 10; i++)
	{
		password[i] = rand() % 10 + '0';
		sum += password[i] - '0';
	}
	for (; i < 26; i++)
	{
		password[i] = rand() % 26 + 'A';
		sum += password[i];
	}
	for (; i < 52; i++)
	{
		password[i] = rand() % 26 + 'a';
		sum += password[i];
	}
	for (; i < 84; i++)
	{
		password[i] = sum % 62 + 'A';
		sum += password[i];
	}
	password[i] = '\0';
	printf("%s\n", password);
	return (0);
}
