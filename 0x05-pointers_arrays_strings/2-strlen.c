#include "holberton.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: a variable as referencia
	*
 * followed by a new line.
	* Return: none.
 */

int _strlen(char *s)
{
int i; /* counter*/
char nully = '\0'; /* this is the last char as null*/
while (s[i] != nully)
i++;
return (i);
}
