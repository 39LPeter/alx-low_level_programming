#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * Write a function that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, l;
	char *text;

	text= malloc(letters);
	if (text==NULL)
		return (0);
	if (filename==NULL)
		return (0);
	file= open(filename, O_RDONLY);

	if(file == -1)
	{
		free(text);
		return(0);
	}
        let =read(file,text,letters);
        l = write(STDOUT_FILENO, text,let)

	close(file);
        
        return(l);
}	

