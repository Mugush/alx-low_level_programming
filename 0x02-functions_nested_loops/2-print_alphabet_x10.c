#include "main.h"

/**
 * print_alphabet_x10 in lower case
 *
 * Main:lower case 10x alphabets
 * Return always 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int t;

	for (t = 1 ; t <= 10; t++)
	{
		for (ch = 'a' ;ch <= 'z'; ch++)
			_putchar(t);
		_putchar('\n');
	}
}


