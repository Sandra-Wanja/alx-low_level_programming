#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("The number %d is ", n);

	if(n>0) {
		printf("positive");
	} else if(n==0) {
		printf("zero");
	} else {
		printf("negative");
	} 
	printf("\n")

	return (0);
}
