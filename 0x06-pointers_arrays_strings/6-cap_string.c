#include "holberton.h"

/**
	* cap_string - a-zA-Z change
	* @a: char to upper
	* Return: int
	*/
char *cap_string(char *a)
{
	char sep[] = {32, 9, 10, ',', ';', '.', '!', '?', 34, 40, 41, 123, 125};
	int i, j, p;

	for (i = 0 ; *(a + i); i++)
	{
		for (j = 0; *(sep + j); j++)
		{
			p = i + 1;
			if (a[p] != '\0' && a[p] >= 'a' && a[p] <= 'z' && a[i] == sep[j])
			{
				a[p] -= 32;
			}
		}

	}
	return (a);
}
