#include <stdio.h>
/**
 *Read_text file - function that reads and prints to STDOUT
 *
 * @filename: the file being read
 * @Letters: number of letters to read and print
 * 
 * Return: (0) if file can't be opened or read;filename is Null; if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters);

char *buff;
ssize_t fp,fread,fclose;

	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		return (0);
	}
	buff = mallof(sizeof(char) * letters);

	do {
	fread =(fp, buff, letters);
	}
	while (!feof(fp));
	{
	fclose(fp);
		return 0;
	}
	
	free(buff);
	buff = malloc(sizeof(char) *letters +1)



