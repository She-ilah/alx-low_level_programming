#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *output_buff(char *fptr);
void end_of_file(int file);

/**
 * output_buff - Acts as the buffer
 * @fptr: pointer to the file
 *
 * Return: char, a pointer to the created buffer
 */
char *output_buff(char *fptr)
{
	char *scr;

	scr = malloc(sizeof(char) * 1024);

	if (scr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fptr);
		exit(99);
	}
	return (scr);
}

/**
 * end_of_file - function closes the file
 * @file: file to be closed
 *
 * Return: void
 */
void end_of_file(int file)
{
	int n;

	n = close(file);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: arguments
 * @argv: Array to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int rd, wd, start, end;
	char *scr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	scr = output_buff(argv[2]);
	start = open(argv[1], O_RDONLY);
	rd = read(start, scr, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(scr);
			exit(98);
		}
		wd = write(end, scr, rd);
		if (end == -1 || wd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(scr);
			exit(99);
		}
		rd = read(start, scr, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(scr);
	end_of_file(start);
	end_of_file(end);
	return (0);
}
