#include <stdio.h>
/**
 *Read_text file - function that reads and prints to STDOUT
 *
 * @filename: the file being read
 * @letters: number of letters to read and print
 *
 * Return: (0)if file can't be opened or read, filename is Null, write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)

	char *buff;
	ssize_t fread, fwrite;
	int fp;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buff = mallof(sizeof(char) * letters);
if (!buff)
	return (0);

	fp = fopen(filename, O_RDONLY);
	fread = read(fp, buff, letters);
	fwrite = write(STDOUT_FILENO, buff, fread);
	if (fp == -1 || fread == -1 || fwrite ==-1 || fwrite != fread)
{	free(buff);
	return (0);
}
	
	printf(!feof(fp));
	fclose(fp);
	return (fwrite);
	
	
}
