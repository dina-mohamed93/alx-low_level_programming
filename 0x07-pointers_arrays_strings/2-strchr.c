#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
*/

char *_strchr(char *s, char c);
{
	int j;

	for (j =  0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return ('\0');
}
