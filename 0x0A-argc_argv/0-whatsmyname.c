#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints its name
 * @argc: counts arguments passed into program
 * @argv: array of pointers to strings passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
printf("%s\n", argv[argc - 1]);
}
