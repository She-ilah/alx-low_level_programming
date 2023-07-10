#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - Function reads and prints text file to stdout.
 * @filename: Text file to be read and printed.
 * @letters: total number of letters in text file
 * Return: number of letters read and printed 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_ins;
	ssize_t num;
	ssize_t var;

	file_ins = open(filename, O_RDONLY);
	if (file_ins == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	var = read(file_ins, buffer, letters);
	num = write(STDOUT_FILENO, buffer, var);

	free(buffer);
	close(file_ins);
	return (num);
}

