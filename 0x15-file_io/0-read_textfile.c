#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * read_textfile - function that reads a text file and prints it.
 * @filename: file name
 * @letters: bytes to read
 * Return: returns the actual number of letters it could read and print
 */




ssize_t read_textfile(const char *filename, size_t letters)
{
	int FD;
	char *buffer;
	ssize_t w_buffer;

	if (filename == NULL)
	{
		return (0);
	}

	FD = open(filename, O_WRONLY);
	if (FD < 0)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}

	w_buffer = write(FD, buffer, letters);
	if (w_buffer < 0)
	{
		free(buffer);
		return (0);
	}

	close(FD);
	free(buffer);

	return (w_buffer);
}
