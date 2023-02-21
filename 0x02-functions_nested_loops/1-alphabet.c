#include "main.h"

/**
 *print- lowercase  alphabet
 *Decription: It prints lowercase alphabet followed by new line
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	 _putchar('\n');
	return (0);
}
