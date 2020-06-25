#include "holberton.h"

/**
	* string_toupper - a-zA-Z change
	* @a: char to upper
	* Return: int
	*/
char *string_toupper(char *a)
{
	for (int i = 0; *(a + i); i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
		a[i] -= 32;
		}

	}

return (a);
}
