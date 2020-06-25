#include "holberton.h"
#include <stdio.h>

/**
	* _strcmp - compare.
	* @s1: one
	* @s2: two
	*
	* Return: int
	*/
int _strcmp(char *s1, char *s2)
{
	const unsigned char *s10 = (const unsigned char *) s1;
	const unsigned char *s20 = (const unsigned char *) s2;
	unsigned char c1, c2;

	do {
		c1 = (unsigned char) *s10++;
		c2 = (unsigned char) *s20++;
			if (c1 == '\0')
				return (c1 - c2);

	} while (c1 == c2);
	return (c1 - c2);
}
