#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are invalid characters in the string.
 */
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
        return (0);

    unsigned int result = 0;
    int i;

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
        {
            result = result * 2 + 0;
        }
        else if (b[i] == '1')
        {
            result = result * 2 + 1;
        }
        else
        {
            while (i >= 0)
            {
                i--;
                putchar(b[i]); 
            }
            putchar('\n');
            free((void *)b); 
            exit(EXIT_FAILURE);
        }
    }

    free((void *)b); 
    return (result);
}
