#include <stdio.h>
/**
* main:- A program that multiplies 2 numbers, followed by new line.
*@argc: the argument count
*@argv: the argument vector
*Return: 0 on success, 1 faulire to receive two arguments.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s <numb1> <numb2>/n", argv[0]);
		return (1);
	}

	int numb1 = atoi(argv[1]);
	int numb2 = atoi(argv[2]);
	int result = numb1 * numb2;

	printf("%d\n" numb1, numb2, result);
	return (0);
}
