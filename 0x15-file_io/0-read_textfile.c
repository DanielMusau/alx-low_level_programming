#include "main.h"

/**
 * read_textfile - Reads a text fle and prints it to the POSIX standard output.
 * @filename: file to be read.
 * @letters: The number of letters it should read and print.
 *
 * Return: 0 if file cannot be opened or read, or if filename is
 * NULL, or Write fails otherwsie return the number of letters
 * it could print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t fread, fwrite;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	fread = read(file, buffer, letters);
	fwrite = write(STDOUT_FILENO, buffer, fread);

	close(file);

	free(buffer);

	return (fwrite);
}
