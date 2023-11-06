#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocate memory for a memory block.
 * @ptr: Pointer to the old memory block.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size in bytes for the memory block.
 *
 * Return: A pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int  min_size;
int i;

if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (ptr == NULL)
{
return (malloc(new_size));
}
else if (new_size == old_size)
{
return (ptr);
}
else
{
void *new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (ptr);
}

min_size = (old_size < new_size) ? old_size : new_size;
for (i = 0; i < min_size; i++)
{
((char *)new_ptr)[i] = ((char *)ptr)[i];
}
free(ptr);

return (new_ptr);
}
}
