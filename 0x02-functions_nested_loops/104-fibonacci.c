#include <stdlib.h>
#include <stdio.h>

/**
 * main - print fibonacci numbers up to 98 numbers total
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	unsigned long na, nb, q1, q2, r1, r2;

	na = 1, nb = 2;
	while (i < 90)
	{
		printf("%lu, %lu, ", na, nb);
		na += nb, nb += na, i += 2;
	}
	printf("%lu, %lu, ", na, nb);
	q1 = na / 100, q2 = nb / 100;
	r1 = na % 100, r2 = nb % 100;
	while (i < 96)
	{
		na = q1 + q2, nb = r1 + r2;
		nb > 99 ? na++ : nb;
		nb = nb % 100;
		printf("%lu", na);
		printf(nb < 10 ? "0" : "");
		printf("%lu", nb);
		printf(i < 95 ? ", " : "\n");
		q1 = q2, q2 = na;
		r1 = r2, r2 = nb, i++;
	}
	return (0);
}
