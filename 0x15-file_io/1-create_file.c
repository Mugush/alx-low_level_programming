#include <stddef.h>
#include "main.h"
/**
 * create_file - This function creates a file
 * @filename: This is the file name
 * @text_content: string to write to the file
 *
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content);
{
	int fp, leng = 0, fwrite;

	if (filename == false)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[leng])
		leng++;
	fwrite = write(fp, text_content, leng);
	if (fwrite == -1)
		return (-1);
	close(fp);
	return (1);
}
