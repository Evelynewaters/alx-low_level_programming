#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: pointer
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
