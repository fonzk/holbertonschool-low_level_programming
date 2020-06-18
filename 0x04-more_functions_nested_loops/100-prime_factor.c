#include "holberton.h"
#include <stdio.h>

/**
 * main -  largest prime factor of the number 612852475143
 * Description:  A column of asterisks on the left side,
 * Return: Always 0.
 */
int main(void)
{
long num = 612852475143;
long i;
	for (i = 2; i < num; i++)
		while ((num % i) == 0)
			num /= i;
	printf("%ld\n", num);

	return (0);
}
