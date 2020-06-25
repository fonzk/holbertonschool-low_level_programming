#include "holberton.h"

/**
	* string_toupper - a-zA-Z change
	* @a: char to upper
	* Return: int
	*/
char *string_toupper(char *a)
{
	int i = 0;

	for (; *(a + i); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
		a[i] -= 32;
		}

	}

return (a);
}
