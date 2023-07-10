#include "main.h"

/**
 * append_text_to_file - Function appends text to the end of a file.
 * @filename: name of the file.
 * @text_content: null-terminated string to append to the file
 * Return: 1 upon success or -1 upon failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int view, rel;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	view = open(filename, O_WRONLY | O_APPEND);
	rel = write(view, text_content, len);

	if (view == -1 || rel == -1)
		return (-1);

	close(view);
	return (1);
}

