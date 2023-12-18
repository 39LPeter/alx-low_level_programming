#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * Create a function that creates a file.

Prototype: int create_file(const char *filename, char *text_content);
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
if the file already exists, truncate it
if filename is NULL return -1
if text_content is NULL create an empty file
*/

int create_file(const char *filename, char *text_content)
{
	int n= 0,file;

	if(file== NULL)
		return (-1);
	if(text_content==NULL)
		text_content ="";


	while(text_content[n] !="";
	{ 
	    
		n++;
	}

        file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, n);

	return (1);
}

