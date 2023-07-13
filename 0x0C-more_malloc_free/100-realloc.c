#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - uses malloc and free to reallocate a chunk of memory
 * @ptr: reference to the memory that Malloc previously allocated
 * @old_size: size of the ptr memory that was allocated
 * @new_size: the new memory block's size
 * Return:address of the recently allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *old_ptr;
char *ptr1;
unsigned int j;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
ptr1 = malloc(new_size);
if (!ptr1)
return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
for (j = 0; j < new_size; j++)
ptr1[j] = old_ptr[j];
}
if (new_size > old_size)
{
for (j = 0; j < old_size; j++)
ptr1[j] = old_ptr[j];
}
free(ptr);
return (ptr1);
}
