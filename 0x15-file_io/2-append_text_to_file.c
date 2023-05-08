#include "main.h"

/**
 * append_text_to_file - function appends text at end of file
 * @filename: pointer to the file
 * @text_content: string to add at end of file
 *
 * Return: 1 on success or -1 upon failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, num, fptr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fptr = open(filename, O_WRONLY | O_APPEND);
	num = write(fptr, text_content, len);

	if (fptr == -1 || num == -1)
		return (-1);

	close(fptr);
	return (1);
}
