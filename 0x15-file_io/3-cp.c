#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *main_display(char *file_chars);
void end_of_file(int file_ins);

/**
 * *main_display - Function creates a buffer of 1024 bytes.
 * @file_chars: file being stored in buffer.
 * Return: A pointer to the main display/buffer.
 */
char *main_display(char *file_chars)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_chars);
		exit(99);
	}
	return (buffer);
}

/**
 * end_of_file - Function closes all file descriptors.
 * @file_ins: file descriptor that will be closed
 * Return: void
 */
void end_of_file(int file_ins)
{
	int i;

	i = close(file_ins);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_ins);
		exit(100);
	}
}

/**
 * main - Function duplicates file contents.
 * @argc: Argument count
 * @argv: Argument vectors.
 * Return: 0 upon success.
 */
int main(int argc, char *argv[])
{
	int start, end;
	int view, rel;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = main_display(argv[2]);
	start = open(argv[1], O_RDONLY);
	view = read(start, buffer, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || view == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		rel = write(end, buffer, view);
		if (end == -1 || rel == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		view = read(start, buffer, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (view > 0);

	free(buffer);
	end_of_file(start);
	end_of_file(end);
	return (0);
}

