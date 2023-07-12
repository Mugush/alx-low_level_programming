#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, 1 if one number contains symbols that are not digits.
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *ptr = argv[i];

		while (*ptr != '\0')
		{
			if (*ptr < '0' || *ptr > '9')
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}

		num = atoi(argv[i]);
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
