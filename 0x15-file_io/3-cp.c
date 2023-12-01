#include "main.h"
#include <stdio.h>

/**
 * check_open_files - checks if files can be opened.
 * @src_fd: Source file descriptor.
 * @dest_fd: Destination file descriptor.
 * @argv: Arguments vector.
 * Return: No return.
 */
void check_open_files(int src_fd, int dest_fd, char *argv[])
{
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point of the program.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, err_close;
	ssize_t num_read, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_open_files(src_fd, dest_fd, argv);

	num_read = 1024;
	while (num_read == 1024)
	{
		num_read = read(src_fd, buffer, 1024);
		if (num_read == -1)
			check_open_files(-1, 0, argv);
		num_written = write(dest_fd, buffer, num_read);
		if (num_written == -1)
			check_open_files(0, -1, argv);
	}

	err_close = close(src_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	err_close = close(dest_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}
