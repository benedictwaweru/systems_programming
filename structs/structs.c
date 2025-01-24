/**
 * Structs
 *
 * A struct is a user-definable type that holds multiple pieces of data, potentially of different types.
 * It’s a convenient way to bundle multiple variables into a single one.
 * This can be beneficial for passing variables to functions (so you just have to pass one instead of many), and useful for organizing data and making code more readable.
 */

#include <stdio.h>

typedef struct Node {
	void* data;
	void* next;
} Node;
