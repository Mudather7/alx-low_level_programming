#include<stdio.h>
/**
 * main - Entry point
 *
 * Description:'using the sizeof to print the size of various types'
 *
 * return: 0 (success)
*/

int main(void)
{
	printf("size of a char : %d byte(s)\n", sizeof(char));
	printf("size ot a int : %d byte(s)\n", sizeof(int));
	printf("size of a long int : %d byte(s)\n", sizeof(long int));
	printf("size of a long long int : %d byte(s)\n", sizeof(long long int));
	printf("size of a fload : %ld byte(s)\n", sizof(float));
	return (0);
}
