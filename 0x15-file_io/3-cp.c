#include "main.h"
/**
 * main - copies the content of a file to another one
 * @ac: num of arguments.
 * @av: array of arguments.
 * Return: It is always 0.
 * Made by: Omar El-Sakka
 */
int main(int ac, char **av)
{
	int fd_1, fd_2;
	ssize_t bytes;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_1 = open(av[1], O_RDONLY);
	fd_2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (fd_2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((bytes = read(fd_1, &buffer[0], 1024)) > 0)
		if (write(fd2, buffer, bytes) != bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_1 = close(fd_1);
	fd_2 = close(fd_2);
	if (fd_1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[1]), exit(100);
	if (fd_2)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", av[2]), exit(100);
	return (0);
}
