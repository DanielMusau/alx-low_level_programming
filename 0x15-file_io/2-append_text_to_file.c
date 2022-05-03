#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: The NULL termineate string at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int fwr;
	int nlett;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (file)
			return (1);
		if (!file)
			return (-1);
	}
	for (nlett = 0; text_content[nlett]; nlett++)
		;

	fwr = write(file, text_content, nlett);

	if (fwr == -1)
		return (-1);

	close(file);

	return (1);
}
