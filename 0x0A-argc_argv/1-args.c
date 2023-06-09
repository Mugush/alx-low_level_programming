#include <stdio.h>
/**
* main:- A program prints number of arguments plus new line.
*@argc: the argument count
*@argv: the argument vector
*Return: 0 on successful execution.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
