#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two positive numbers.
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: Pointer to the result of the multiplication.
 */
int *multiply(int num1, int num2)
{
	int *result = malloc(sizeof(int));

	if (result == NULL)
	{
	printf("Error: Memory allocation failed.\n");
	exit(1);
	}

	*result = num1 * num2;
	return (result);
}

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
	printf("Error: Incorrect number of arguments\n");
	return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
	printf("Error\n");
	return (1);
	{

	int *result = multiply(num1, num2);
	printf("Result: %d\n", *result);

	free(result);
	return (0);
}
