#include <stdio.h>
#include "main.h"
/**
 * main - Entry point for testing the print_remaining_days function
 *
 * Return: Always 0
 */
int main(void)
{
	int month = 2;
	int day = 29;
	int year = 2000;

	printf("Testing leap year case: %02d/%02d/%04d\n", month, day, year);
	print_remaining_days(month, day, year);

	return (0);
}
