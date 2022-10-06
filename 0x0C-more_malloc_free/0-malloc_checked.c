#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process terminat
 * ion if error
 */
void *malloc_checked(unsignedint b)
{
void *p

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
