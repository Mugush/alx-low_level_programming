#include <stdio.h>
#include <stdlib.h>
/**
* main- A program that add 2positive numbers, followed by new line.
*@argc: the argument count
*@argv: the argument vector
*Return: 0 failure, 1 if one number contains symbols taht are not digits.
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
	int j = 0;

	while (argv[i][j] != '\0')
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
		printf("Error\n");
		return (1);
	}
	j++;
	}

	num = atoi(argv[i]);
	sum += num;

	printf("%d\n", result);
	return (0);
}
