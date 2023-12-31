#include "main.h"

/**
 * _memcpy - function that copies @n bytes from memory area @src
 * to memory area @dest
 * @n: function to be copied
 * @src: bytes from memory area
 * @dest: memory area
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
