#include "holberton.h"
#include <stdio.h>

/**
 * main -  the sum of all the multiples of 3 or 5 below 1024
 * Return: void
 */
void main(void)
{
	int suma;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			suma += i;
		}
	}
		printf("%i\n", suma);
}
