#include <stdio.h>
#include <stdlib.h>
/**
* main:- A program that multiplies 2 numbers, followed by new line.
*@argc: the argument count
*@argv: the argument vector
*Return: 0 on success, 1 faulire to receive two arguments.
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("%s <num1>, <num2>\n", argv[0]);
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
