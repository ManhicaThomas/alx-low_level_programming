#include <stdio.h>

/**
 * main - This prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
