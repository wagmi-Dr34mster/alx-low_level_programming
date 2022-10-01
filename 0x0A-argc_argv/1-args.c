#include <stdio.h>

/**
 * main - prints no of arguments passed
 * @argc: counts arguments passed
 * @argv: array of pointers to strings passed
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
