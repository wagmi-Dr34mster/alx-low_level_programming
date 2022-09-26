#include "main.h"

/**
 * _memset - function to fill memory area
 * @s: pointer to memory area
 * @b: char to be used
 * @n: number of bytes
 *
 *Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n);
{
while (n)
{
s[n - 1] = b;
n--
}
return (s)
}
