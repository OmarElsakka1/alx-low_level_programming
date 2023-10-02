#include "main.h"
/**
 * create_file - creates a text file and writes a content
 * @filename: The file name
 * @text_content: string to be in file.
 * Return: 1 -> Sucess, -1 -> fail.
 * Made by: Omar El-Sakka
*/
int create_file(const char *filename, char *text_content)
{
	int f_d;
	ssize_t bytes;

	if (!filename)
		return (-1);

	f_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (!text_content)
	{
		return (1);
	}
	else
	{
		bytes = write(f_d, text_content, strlen(text_content));
		return (bytes == -1 ? -1 : 1);
	}
}
