#include "main.h"
/**
 * append_text_to_file - This appends text at the end of the file.
 * @filename: This is the name of the file.
 * @text_content:
 *
 * Return: 1 on success || -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, leng = 0, fwrite;

	if (filename == false)
	return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	return (-1);
	if (text_content)
	{
	while (text_content[leng])
	leng++;

	fwrite = write(fp, text_content, leng);

	if (fwrite == -1)
		return (-1);
	}
	close(fp);
	return (1);
}
