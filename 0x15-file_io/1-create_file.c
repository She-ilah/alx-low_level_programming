#include "main.h"

/**
 * create_file - Function creates a file
 * @filename: name of the file to create.
 * @text_content: null-terminated string to write to the file.
 * Return: 1 upon success or -1 upon failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_ins, rel;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	file_ins = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rel = write(file_ins, text_content, len);

	if (file_ins == -1 || rel == -1)
		return (-1);

	close(file_ins);
	return (1);
}

