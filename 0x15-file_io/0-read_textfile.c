#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * read_textfile - function that reads a text file and prints it.
 * @filename: file name
 * @letters: byte to read
 * Return: eturns the actual number of letters it could read and print
 */




ssize_t read_textfile(const char *filename, size_t letters)
{

	int FD;
	char *ptr_ml;
	size_t lenght;
	size_t w_lenght;

	if (filename == NULL)
		return (0);

	ptr_ml = malloc(letters * sizeof(char));
	if (ptr_ml == NULL)
	{
		return (0);
	}

	FD = open(file_name, O_RDONLY);
	lenght = read(FD, ptr_ml, letters);
	w_lenght = write(STDOIT_FILENO, ptr_ml, letters);
	
	if (lenght != letters || w_lenght == 0)
	{
		free(ptr_ml);
		return (0);

	}

	close(FD);
	free(ptr_ml);

	return (w_lenght);

}
