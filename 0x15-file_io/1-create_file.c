#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int nlett;
	int fwrite;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR, | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nlett = 0; text_content[nlett]; nlett++)
		;

	fwrite = write(file, text_content, nlett);

	if (fwrite == -1)
		return (-1);

	close(file);

	return (1);
}
