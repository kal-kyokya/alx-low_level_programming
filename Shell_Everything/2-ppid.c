#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid_t id;

	id = getpid();
	printf("Process ID is %d\n", id);

	pid = getppid();
	printf("Parent process is %d\n", pid);
	
	return (0);
}
