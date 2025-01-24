/**
 * Pointers
 *
 * A pointer is a variable that holds an address to a value. If int a = 10, then int* p = &a, meaning that p holds the memory address of the value 10, usually a hexadecimal number.
 * The hexadecimal number, when converted to decimal, represents the index in memory where the variable is stored, usually a very large number.
 * The large number is an index in virtual memory and it's used to map the actual index on the physical memory
 *
 * Pointer Types
 * A pointer is of the type of the variable it is pointing to, i.e., pointers pointing to integers are of type 'int*', characters are of type 'char*' and so on.
 *
 * Dereferencing
 * A pointer is dereferenced by getting access to the initial variable it is pointing to. It is done by:
 *  int i;
 *  int* p;
 *  p = &i;
 *  i = 10;
 *  *p = 20; // Dereferencing a pointer is done this way. Now the value that p was pointing to, namely i is 20
 *
 * Passing pointers as arguments
 * Pointers can be passed as arguments, where the function gets a copy of the pointer and dereference its copy of the pointer to get back to the original variable!
 * The function can’t see the variable itself, but it can certainly dereference a pointer to that variable!
 * Example
 * #include <stdio.h>
 *
 * void increment(int* p) // note that it accepts a pointer to an int
 * {
 * 	*p = *p + 1; // add one to the thing p points to
 * }
 *
 * int main(void)
 * {
 * 	int i = 10;
 *  int* j = &i; // note the address-of; turns it into a pointer to i
 *  printf("i is %d\n", i); // prints "10"
 *  printf("i is also %d\n", *j); // prints "10"
 *  increment(j); // j is an int*--to i
 *  printf("i is %d\n", i); // prints "11"!
 * }
 *
 * The NULL Pointer
 * Any pointer variable of any pointer type can be set to a special value called NULL. This indicates that this pointer doesn’t point to anything.
 * Since it doesn’t point to a value, dereferencing it is undefined behavior, and probably will result in a crash
 *
 *
 * Pointer Arithmetic
 * For a random example, say that a number 3490 was stored at address (“index”) 23,237,489,202.
 * If we have an int pointer to that 3490, that value of that pointer is 23,237,489,202… because the pointer is the memory address. Different words for the same thing.
 * And now let’s say we have another number, 4096, stored right after the 3490 at address 23,237,489,210 (8 higher than the 3490 because each int in this example is 8 bytes long).
 * If we add 1 to that pointer, it actually jumps ahead sizeof(int) bytes to the next int.
 * It knows to jump that far ahead because it’s an int pointer. If it were a float pointer, it’d jump sizeof(float) bytes ahead to get to the next float!
 * So you can look at the next int, by adding 1 to the pointer, the one after that by adding 2 to the pointer, and so on.
 *
 * The void pointer
 */

#include <stdio.h>

int main()
{
	int* p;
	printf("%zu\n", sizeof(p));
	return 0;
}
