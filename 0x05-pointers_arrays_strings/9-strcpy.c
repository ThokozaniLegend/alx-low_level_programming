#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * Return: A pointer to the destination string.
 */

char *_strcpy(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return (dest);
}
