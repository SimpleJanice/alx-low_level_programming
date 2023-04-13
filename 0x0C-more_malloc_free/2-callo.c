#include "main.h"
#include <stdlib>
/**
* _calloc - function to allocates memory
* @nmemb: unsigned int type
* @size: unsigned int type
* Return: return pointer to array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
int count = 0;

if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

while (count < (nmemb * size))
{
ptr[count] = 0;
count++;
}
return (ptr);
}
