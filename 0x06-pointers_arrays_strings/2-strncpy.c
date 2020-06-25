#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - copy string src to dest.
 * @dest: destination
 * @src: source
 * @n: n bytes
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	for (; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
