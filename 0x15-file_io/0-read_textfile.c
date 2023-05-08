#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function reads text file and prints it to the stdout.
 * @filename: pointer to the file
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read or print or 0 upon failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fptr;
	ssize_t num;
	ssize_t n;
	char *scr;

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);

	scr = malloc(sizeof(char) * letters);
	n = read(fptr, scr, letters);
	num = write(STDOUT_FILENO, scr, n);

	free(scr);
	close(fptr);
	return (num);
}
