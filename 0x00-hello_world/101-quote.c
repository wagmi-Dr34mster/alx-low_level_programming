#include <stdio.h>
#include <unistd.h>

/**
 *main - prints the last part of a quote in standard error
 *Return: Always 1 (Success)
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
return (1);
}
