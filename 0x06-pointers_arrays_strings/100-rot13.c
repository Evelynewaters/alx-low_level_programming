#include "main.h"
#include <stdio.h>

char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
/**
 * rot13 - encoder rot13
 * @s: pointer to the string params
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);

}
