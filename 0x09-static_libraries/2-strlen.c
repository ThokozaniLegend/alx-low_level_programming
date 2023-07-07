#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of s.
 */

int _strlen(char *s)
{
	 int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
