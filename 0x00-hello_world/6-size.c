#include <stdio.h>
/**
 *main - Prints the size of various data types
 *
 *Return:0.
 */
int main(void)
{
	int num;
	long int age;
	long long int nums;
	char number;
	float doc;

        printf("Size of char: %lu bytes(s)\n", sizeof(number));
	printf("Size of int: %lu bytes(s)\n", sizeof(num));
	printf("Size of long int: %lu bytes(s)\n", sizeof(age));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(nums));
	printf("Size of float: %lu bytes(s)\n", sizeof(doc));
	return (0);
}
