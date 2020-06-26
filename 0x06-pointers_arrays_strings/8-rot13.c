#include "holberton.h"
/**
 *rot13 - Rotate letters
 *@s1: pointer parameter
 *Description: Rotate letters
 *Return: return pointer
 */
char *rot13(char *s1)
{
	int i, j;

	char code[2][53] = {
			{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"},
			{"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"}
																					};

	for (i = 0; s1[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s1[i] == code[0][j])
			{
				s1[i] = code[1][j];
				break;
			}
		}
	}
	return (s1);
}
