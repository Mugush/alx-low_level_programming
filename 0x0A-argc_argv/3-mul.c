#include <stdio.h>
/**
* main:- A program that multiplies 2 numbers, followed by new line.
*@argc: the argument count
*@argv: the argument vector
*Return: 0 on success, 1 faulire to receive two arguments.
*/
int main(void)
{
	int num1, num2, result;

	printf("num1");
	scanf("%d", &num1);

	printf("num2");
	scanf("%d", &num2);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
