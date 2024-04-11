#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	printf("$ ");

	read = getline(&line, &len, stdin);
	printf("%s", line);

	free(line);

	if (read == -1)
		printf("\nEnd of input reached.\n");

	return (0);
}
