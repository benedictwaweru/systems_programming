/**
 * File Management
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
	FILE* file_pointer;
	int c;

	file_pointer = fopen("example.txt", "r");

	if (file_pointer == NULL) {
		perror("Error opening file");
		return EXIT_FAILURE;
	}
	while ((c = fgetc(file_pointer)) != EOF)
		printf("%c", c);

	fclose(file_pointer);

}
