#include "main.h"
#include <stdio.h>
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
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ
		abcdefghijklmnopqrstuvwxyz";
	char datarot[] "NOPQRSTUVWXYZABCDEFGHIJKLM
		nopqrstuvwxyzabcdefghijklm";
	
	for (i = 0; s[] != '\0'; i++)
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
