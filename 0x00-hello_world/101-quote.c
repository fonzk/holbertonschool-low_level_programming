#include <stdio.h>
#include <unistd.h>

/**
 * main - writes text to stdout
 * description: using write to stdout message error
 * Return: 1
*/
int main(void)
{

write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 0);
return (1);

}
