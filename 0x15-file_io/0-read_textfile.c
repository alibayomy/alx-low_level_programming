#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads and prints a text file
 * @filename: the name of the file to be read
 * @letters: the number of letters to read and print
 * Return: the actual number of the read and printed letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fp;
	char *buffer;
	size_t n;
	size_t wr;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	n = read(fp, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, n);
	free(buffer);
	close(fp);
	return (wr);
}
