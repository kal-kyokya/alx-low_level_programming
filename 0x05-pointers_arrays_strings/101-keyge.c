#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int myrand, count, total;

	count = 0;
	total = 2772;
	srand(time(NULL));
	while (total > 122)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
		count++;
	}
	printf("%c", total);
	printf("\n");

	return (0);
}
