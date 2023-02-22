#include "main.h"

/**
 * print_alphabet_x10- print alphabets 10 times in lowercase
 * Description:print alphabets 10 times in lowercase
 *
 * Return:always 0 (success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int t;

	for (t = 1 ; t <= 10; t++)
	{
		for (ch = 'a' ; ch <= 'z'; ch++)

			_putchar(ch);
				_putchar('\n');
	}
}


