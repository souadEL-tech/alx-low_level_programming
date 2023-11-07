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

	if (filename == NULL)
		return (0);


	FD = open(filename, O_RDONLY);
	if (FD < 0)
	{
		return (0);
	}


	ptr_ml = malloc(letters * sizeof(char));
	lenght = read(FD, ptr_ml, letters);

	if (lenght == 0)
		return (0);

	write(1, ptr_ml, letters);

	if (lenght != letters)
	{
		return (0);
	}


	return (lenght);

}
