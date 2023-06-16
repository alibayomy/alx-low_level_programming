#include <stdio.h>
/**
 * main -  Entery point
 *
 * Description : using  sizeofto print  various types .
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char : %u.\n", sizeof(char));
	printf("Size of an int : %u.\n", sizeof(int));
	printf("Size of a long int : %u.\n", sizeof(long int));
	printf("Size of a long long int : %u.\n", sizeof(long long int));
	printf("Size of a float : %u.\n", sizeof(float));
}
