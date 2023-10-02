#include "main.h"
/**
 * read_textfile - reads the content of the given file
 * @filename: The file name
 * @letters: How many letters to be read
 * Return: the letters that has been read
 * Made by: Omar El-Sakka
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d;
	ssize_t bytes;
	char buffer[1024 * 8];

	if (!filename || !letters)
		return (0);
	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);

	bytes = read(f_d, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(f_d);
	return (bytes);
}
