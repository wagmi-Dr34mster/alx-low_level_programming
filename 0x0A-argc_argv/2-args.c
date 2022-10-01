#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that prints all arguments passed
 * @argc: counts arguments(strings) passed
 * @argv: array of pointers to strings passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i=0; i < argc; i++)
printf("%s\n", argv[i]);
}
