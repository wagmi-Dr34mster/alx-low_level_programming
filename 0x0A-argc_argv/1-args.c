#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints no of arguments passed
 * @argc: counts arguments passed
 * @argv: array of pointers to strings passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
--argc;
printf("%d\n", argc);
return (0);
}
