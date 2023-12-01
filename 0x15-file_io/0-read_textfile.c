#include "main.h"

/**
 * read_textfile -a function thats  reads a text file and prints the letters
 *
 * @filename: arguments input Name of the file.
 * @letters: argument input the Number of letters to print.
 *
 * Return: Number LETTRES printed. If fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(file_descriptor);
	free(buffer);

	return (bytes_written);
}
