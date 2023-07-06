#include <stdio.h>
/**
 * _sqrt_recursion -function that returns natural square root of a number.
 * @n:number to calculate the square root of.
 *
 * Return: the result of the square root
 */
int sqrt_recursive_helper(int n, int start, int end)
{
	if (start > end)

	{
        return (-1);
	}

	int mid = (start + end) / 2;

	if (mid * mid == n) 
	{
	return (mid);
	}		
	else if (mid * mid < n) 
    	{
	return (sqrt_recursive_helper(n, mid + 1, end));
	}
	else 
	{
	return (sqrt_recursive_helper(n, start, mid - 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0) {
	return (-1);
	}
	if (n == 0 || n == 1) {
	return (n);
	}
	return (sqrt_recursive_helper(n, 1, n));
}

void _putchar(char c)
{
	putc(c, stdout);
}

void print_number(int num)
{
	if (num > 9) 
    	{	
        print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}

void print_sqrt(int n)
{
	if (n < 0) 
	{
	_putchar('-');
	_putchar('1');
	}
	else 
	{
	int sqrt = _sqrt_recursion(n);
	print_number(sqrt);
	}
	_putchar('\n');
}
int main(void)
{
	print_sqrt(16); 
		return (0);
}
