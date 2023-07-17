#ifndef _MAIN_C_
#define _MAIN_C_

#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from,
 *	followed by a new line.
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
#endif /* _MAIN_C_ */
