#include "main.h"

/**
 * create_file - function creates file.
 * @filename: pointer of name of the file to create.
 * @text_content: pointer of string to write to the file.
 *
 * Return: If it fail - -1.
 *         Else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int df, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	df = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(df, text_content, len);

	if (df == -1 || w == -1)
		return (-1);

	close(df);

	return (1);
}
