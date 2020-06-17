#include <stdio.h>
/**
 * main -  the first 98 fibonnaci numbers
 *
	* Return: void
 */
int main(void)
{
int i = 0;
unsigned long n1, n2;
n1 = 1;
n2 = 2;
while (i < 100)
{
	printf(i < 98 ? "%lu,  %lu, ", n1, n2 : "%lu,  %lu\n", n1, n2);
	n1 += n2;
	n2 += n1;
	i += 2;
}
	return (0);
}
