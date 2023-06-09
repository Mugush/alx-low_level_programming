#include <math.h>
/**
 * _sqrt_recursion -function that returns natural square root of a number.
 * @n:number to calculate the square root of.
 *
 * Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{return -1;
	}
	if (n == 0 || n == 1)
	{return n;
	}
	int result = sqrt_helper(n, 1, n);
	return (result);
}

int sqrt_helper(int n, int start, int end)
{
	if (start > end)
	{ return -1;
	}
int mid = start + (end - start) / 2;
{	
	if (mid == n / mid)
	{ return mid;
	}
	else if (mid < n / mid)
	{return sqrt_helper(n, mid + 1, end);
	}
	else
	{return sqrt_ helper(n, start, mid - 1);
	}
}
