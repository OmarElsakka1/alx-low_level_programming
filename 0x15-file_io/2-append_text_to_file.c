#include "main.h"
/**
 * append_text_to_file - appends text to a file.
 * @filename: The file name
 * @text_content: string to be added to a file
 * Return: 1 -> success, -1 -> fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f_d;
	ssize_t bytes;

	if (!filename)
		return (-1);
	f_d = open(filename, O_WRONLY | O_APPEND);
	if (f_d == -1 || (f_d == -1 && !text_content))
		return (-1);
	if (text_content)
		bytes = write(f_d, text_content, strlen(text_content));
	close(f_d);
	return (bytes == -1 ? -1 : 1);
}
