#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: memory area to be filled
* @size: char to copy
* Return: 0 (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pt;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
pt = malloc(nmemb * size);
if (pt == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
pt[i] = 0;
return (pt);
}
