#include "main.h"

/**
 * append_text_to_file -a function thats  appends text at the end of a file
 * @filename:input argument of  Name of the file.
 * @text_content: input argumrnts of Added content.
 *
 * Return: 1 if the file exists. -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_letters;
	int result;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		result = write(file_descriptor, text_content, num_letters);

		if (result == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
