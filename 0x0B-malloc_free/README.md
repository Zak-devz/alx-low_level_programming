<h1># malloc and free</h1>

`malloc` and `free` are functions used to manage dynamic memory allocation in C.

<h3>## malloc</h3>

`malloc` stands for "memory allocation". It is used to allocate a block of memory on the heap. The function takes one argument, which is the size of the memory block to be allocated in bytes. It returns a pointer to the allocated memory.

Here is an example of how to use `malloc` to allocate an array of 10 integers:

```c
int *array = malloc(10 * sizeof(int));
If malloc is unable to allocate the requested memory, it returns NULL. It is important to check the value of the pointer returned by malloc to make sure that the memory allocation was successful.

free
free is used to deallocate memory that was previously allocated by malloc. The function takes one argument, which is a pointer to the memory block to be deallocated.

Here is an example of how to use free to deallocate the memory allocated for an array of integers:

free(array);
After calling free, the pointer passed as an argument should no longer be used. It is a good practice to set the pointer to NULL after calling free.
