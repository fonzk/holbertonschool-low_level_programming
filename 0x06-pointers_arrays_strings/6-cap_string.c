#include "holberton.h"

/**
	* cap_string - a-zA-Z change
	* @a: char to upper
	* Return: int
	*/
char *cap_string(char *a)
{
	char sep[] = {32, 9, 10, ',', ';', '.', '!', '?', 34, 40, 41, 123, 125};
	int i, j;

	for (i =0 ; *(a + i); i++)
	{
		for (j = 0; *(sep + j); j++)
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z' && a[i] == sep[j])
			{
				a[i + 1] -= 32;
			}
		}
		
	}
	return (a);
}
