#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int c = 5;
	pid_t pid = fork();

	if (pid == 0)
	{
		c += 5;
		printf("I am the child");
	}
}