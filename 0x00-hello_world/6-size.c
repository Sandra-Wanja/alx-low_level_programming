#include <stdio.h>

/**
 * Entry point of the program
 *
 * This function initializes the program and executes the main logic
 *
 * @return 0 upon successful execution
 */
int main(void)
{

printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0); /* success */
}
