#include<stdio.h>
/**
 * main - Entry point
 * Description: 'A program that using sizeof to print the size of characters'.
 * return: Always 0 (success)
*/
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size ot an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a fload: %lu byte(s)\n", sizeof(float));
	return (0);
}
