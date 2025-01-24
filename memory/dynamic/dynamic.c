/**
 * Dynamic memory allocation
 * What if you want something to persist longer than a particular block? This is where manual memory management comes into play.
 * You can tell C explicitly to allocate for you a certain number of bytes that you can use as you please.
 * And these bytes will remain allocated until you explicitly free that memory.
 * It’s important to free the memory you’re done with!
 * If you don’t, we call that a memory leak and your process will continue to reserve that memory until it exits.
 * If you manually allocated it, you have to manually free it when you’re done with it
 *
 *
 *
 * malloc() - void* malloc( size_t size );
 * The malloc() function accepts a value of type size_t (16-bit unsigned integer type of the result of sizeof , _Alignof(since C11) and offsetof, depending on the data model) and returns a pointer of type void* that is the size of the memory allocated, or NULL if memory cannot be allocated.
 *
 *
 *
 * calloc() - void* calloc( size_t num, size_t size );
 * The calloc() function allocates memory for an array of num objects of size and initializes all bytes in the allocated storage to zero.
 * If allocation succeeds, returns a pointer to the lowest (first) byte in the allocated memory block that is suitably aligned for any object type with fundamental alignment.
 * If size is zero, the behavior is implementation defined (null pointer may be returned, or some non-null pointer may be returned that may not be used to access storage).
 *
 *
 *
 * realloc() - void* realloc( void* ptr, size_t new_size );
 * The realloc() function reallocates the given area of memory. If ptr is not NULL, it must be previously allocated by malloc, calloc or realloc and not yet freed with a call to free or realloc. Otherwise, the results are undefined.
 * The reallocation is done by either:
 * a) expanding or contracting the existing area pointed to by ptr, if possible. The contents of the area remain unchanged up to the lesser of the new and old sizes. If the area is expanded, the contents of the new part of the array are undefined.
 * b) allocating a new memory block of size new_size bytes, copying memory area with size equal the lesser of the new and the old sizes, and freeing the old block.
 * If there is not enough memory, the old memory block is not freed and null pointer is returned.
 *
 *
 *
 * free() - void free( void *ptr );
 * The free() function deallocates the space previously allocated by malloc(), calloc(), aligned_alloc(),(since C11) or realloc().
 * If ptr is a null pointer, the function does nothing.
 * The behavior is undefined if the value of ptr does not equal a value returned earlier by malloc(), calloc(), realloc(), or aligned_alloc()(since C11).
 * The behavior is undefined if the memory area referred to by ptr has already been deallocated, that is, free(), free_sized(), free_aligned_sized()(since C23), or realloc() has already been called with ptr as the argument and no calls to malloc(), calloc(), realloc(), or aligned_alloc()(since C11) resulted in a pointer equal to ptr afterwards.
 * The behavior is undefined if after free() returns, an access is made through the pointer ptr (unless another allocation function happened to result in a pointer value equal to ptr).
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int* p = malloc(sizeof(int));
	return EXIT_SUCCESS;
}
