#include <stdio.h>
#include <unistd.h>

/**
 * main - writes text to stdout
 * description: using write to stdout message error
 * Return: 1 one
*/

int main(void)
{
int lo = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", lo);
return (1);
}
