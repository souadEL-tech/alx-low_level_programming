#include "main.h"

#include <stdlib.h>




/**
 * read_textfile - function that reads a text file and prints it.
 * @filename: file name
 * @letters: bytes to read
 * Return: returns the actual number of letters it could read and print
 */




ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t FD;
	char *buffer;
	ssize_t READ;
	ssize_t w_buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}

	FD = open(filename, O_WRONLY);
	READ = read(FD, buffer, letters);
	w_buffer = write(STDOUT_FILENO, buffer, READ);
	if (FD == -1 || READ == -1 || w_buffer == -1 || w_buffer != READ)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(FD);

	return (w_buffer);
}
