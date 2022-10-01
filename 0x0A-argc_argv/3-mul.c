#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints multiplication
 * of two numbers
 * @argc: counts arguments passed
 * @argv: array of pointers to strings passed
 *
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
int mul = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
mul = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
printf("%d\n", mul);
return (0);
}
}
