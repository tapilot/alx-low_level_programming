#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("The number %d is ", n);
	
	if (n > 0) {
		printf("positive");
	} else if (n < 0) { 
		printf("negative");
	} else { 
		printf("zero");
	}

	printf("\n");

	return (0);
}
