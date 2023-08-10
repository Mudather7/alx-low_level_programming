#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * return: 0 (success)
*/
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of a int : %lu byte(s)\n", sizeof(int));
	printf("size of a long int : %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int : %lu byte(s)\n", sizeof(long long int));
	return (0);
}
