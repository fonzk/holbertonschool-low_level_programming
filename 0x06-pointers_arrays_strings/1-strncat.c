#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: n bytes
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
