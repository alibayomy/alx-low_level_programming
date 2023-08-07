#include "main.h"
#include <stdio.h>
#include <fcntl.h>
/**
 * read_textfile - a function that reads and prints a text file
 * @filename: the name of the file to be read
 * @letters: the number of letters to read and print
 * Return: the actual number of the read and printed letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char insidethefile[letters];
	FILE *fp;
	char *buffer;
	size_t n;
	size_t wr;

	fp = oepn(filename, O_RDONLY);
	if (fp == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	n = read(fp, buffer, letters);
	wr = write(STDOUT_FILENO, buf, t);
	free(buffer);
	close(fd);
	return (wr);
}
