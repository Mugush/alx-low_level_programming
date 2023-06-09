#include <stdio.h>
/**
* main:- A program that prints all arguments received, end with new line.
*@argc: the argument count
*@argv: the argument vector
*Return: 0 on successful execution.
*/
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
