#include "main.h"
#include <stddef.h>

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *           to by @src into that pointed to by @dest.
 * 
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
