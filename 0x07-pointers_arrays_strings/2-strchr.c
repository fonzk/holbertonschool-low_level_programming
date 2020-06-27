#include "holberton.h"

/**
	* _strchr - Locates a character in a string
	* @s: String
	* @c: Character to search
	* Return: Pointer to the first occurrence of the character c in the string s
	**/
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return ((char) *s);
		}
	}
	return (0);
}
