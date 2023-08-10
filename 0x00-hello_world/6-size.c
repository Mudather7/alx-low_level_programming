#include<stdio.h>
/**
 * main - A program that using sizeof to print the size of characters.
 * return: Always 0 (success)
*/
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size ot an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a fload: %zu byte(s)\n", sizeof(float));
	return (0);
}
