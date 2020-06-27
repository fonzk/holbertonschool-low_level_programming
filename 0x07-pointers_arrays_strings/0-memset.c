#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
