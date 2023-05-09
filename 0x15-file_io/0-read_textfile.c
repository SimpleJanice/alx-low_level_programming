#include "main.h"
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints the letters
* @filename: filename.
* @letters: numbers of letters printed.
*
* Return: numbers of letters printed. It fails, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nd, nr;
char *buf;

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
buf = malloc(sizeof(char) * (letters));
nd = read(fd, buf, letters);
nr = write(STDOUT_FILENO, buf, nd);

close(fd);
free(buf);
return (nr);
}
