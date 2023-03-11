#include <stdio.h>

/**
 * main- prints all arguments it receives.
 * @argc: argument count.
 * @argv: arguments value
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
