#include "holberton.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: a variable string as referencia
	*
 * followed by a new line.
	* Return: none.
 */

void rev_string(char *s)
{
int i = 0; /* counter*/



char nully = '\0'; /* this is the last char as null*/
while (s[i] != nully)
	i++;
int z = i - 1;
i = 0;
char a, ze;

for (; z > i; z--)
{
	a = s[i];
		ze = s[z];
		s[i++] = ze;
		s[z] = a;

}

}
